int compare(int a, int b) {
	    return b - a;
}

int qsortcmp(const void *a, const void *b) {
	return *((int *) a) < *((int *) b);
}