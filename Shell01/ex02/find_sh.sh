find . -type f -name '*.sh' -exec zsh -c 'basename "$0" .sh' {} \;
