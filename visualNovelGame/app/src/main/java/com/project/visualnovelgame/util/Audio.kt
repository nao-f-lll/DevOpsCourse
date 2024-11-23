package com.project.visualnovelgame.util

import android.content.Context
import androidx.media3.common.MediaItem
import androidx.media3.exoplayer.ExoPlayer

fun playVoice(context: Context, audioFile: Int) {
    val player = ExoPlayer.Builder(context).build()
    val mediaItem = MediaItem.fromUri("android.resource://${context.packageName}/$audioFile")
    player.setMediaItem(mediaItem)
    player.prepare()
    player.play()
}
