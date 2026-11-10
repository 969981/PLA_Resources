/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e43834; name: FUN_02e43834
 */


undefined8 FUN_02e43834(undefined8 *param_1)

{
  size_t sVar1;
  void *__dest;
  char *__s;
  ulong __n;
  
  __s = (char *)*param_1;
  if ((__s != (char *)0x0) && (*(char *)(param_1 + 1) == '\0')) {
    sVar1 = strlen(__s);
    if ((int)sVar1 != 0) {
      __n = (ulong)((int)sVar1 + 1);
      __dest = (void *)(*DAT_0442d138)(9,__n);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
        return 0x34;
      }
      memcpy(__dest,__s,__n);
      *(undefined1 *)(param_1 + 1) = 1;
      return 1;
    }
    *param_1 = 0;
  }
  return 1;
}


