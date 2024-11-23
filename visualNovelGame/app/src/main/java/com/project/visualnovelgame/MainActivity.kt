package com.project.visualnovelgame

import android.os.Bundle
import androidx.activity.compose.setContent
import androidx.activity.ComponentActivity
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.res.painterResource
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview
import com.project.visualnovelgame.data.VisualNovelCharacter
import com.project.visualnovelgame.viewmodel.DialogViewModel

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            val dialogViewModel: DialogViewModel = viewModel()

            val currentDialog = dialogViewModel.getCurrentDialog()
            val showDialog = dialogViewModel.showDialog.value

            VisualNovelCharacter(
                characterName = "AI Guide",
                dialog = currentDialog,
                characterImage = painterResource(id = R.drawable.character_smile),
                backgroundImage = painterResource(id = R.drawable.background_town),
                showDialog = showDialog,
                onNext = { dialogViewModel.onNextDialog() }
            )
        }
    }
}