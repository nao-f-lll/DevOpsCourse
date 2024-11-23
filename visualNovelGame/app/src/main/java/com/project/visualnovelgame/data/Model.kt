package com.project.visualnovelgame.data

import androidx.compose.animation.AnimatedVisibility
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun VisualNovelCharacter(
    characterName: String,
    dialog: String,
    characterImage: Painter,
    backgroundImage: Painter,
    showDialog: Boolean,
    onNext: () -> Unit
) {
    Box(modifier = Modifier.fillMaxSize()) {
        // Background Image
        Image(
            painter = backgroundImage,
            contentDescription = "Background",
            contentScale = ContentScale.Crop,
            modifier = Modifier.fillMaxSize()
        )

        // Character Image
        Image(
            painter = characterImage,
            contentDescription = "Character",
            modifier = Modifier
                .align(Alignment.Center)
                .size(300.dp)
        )

        // Dialog Box
        AnimatedVisibility(visible = showDialog) {
            Column(
                modifier = Modifier
                    .align(Alignment.BottomCenter)
                    .fillMaxWidth()
                    .background(
                        color = Color.White.copy(alpha = 0.9f),
                        shape = RoundedCornerShape(topStart = 16.dp, topEnd = 16.dp)
                    )
                    .padding(16.dp)
            ) {
                Text(
                    text = characterName,
                    fontWeight = FontWeight.Bold,
                    fontSize = 20.sp,
                    color = Color.Black
                )
                Spacer(modifier = Modifier.height(8.dp))
                Text(
                    text = dialog,
                    fontSize = 16.sp,
                    textAlign = TextAlign.Start,
                    color = Color.Black
                )
                Spacer(modifier = Modifier.height(12.dp))
                Button(
                    onClick = onNext,
                    modifier = Modifier.align(Alignment.End)
                ) {
                    Text("Next")
                }
            }
        }
    }
}


@Composable
fun TypewriterText(text: String, speed: Int = 50) {
    var displayedText by remember { mutableStateOf("") }

    LaunchedEffect(text) {
        displayedText = ""
        text.forEachIndexed { index, char ->
            kotlinx.coroutines.delay(speed.toLong())
            displayedText += char
        }
    }

    Text(text = displayedText, fontSize = 16.sp, color = Color.Black)
}
