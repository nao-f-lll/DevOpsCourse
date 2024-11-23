package com.project.visualnovelgame.viewmodel

import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel

class DialogViewModel : ViewModel() {
    private val dialogs = listOf(
        "Welcome to the app! Let me show you around.",
        "This is your first game. Here’s how you play it.",
        "Great job completing the game! Let’s move to the next one."
    )

    private var currentDialogIndex = mutableIntStateOf(0)
    var showDialog = mutableStateOf(true)

    fun getCurrentDialog(): String = dialogs[currentDialogIndex.intValue]

    fun onNextDialog() {
        if (currentDialogIndex.intValue < dialogs.size - 1) {
            currentDialogIndex.intValue++
        } else {
            showDialog.value = false
        }
    }
}
