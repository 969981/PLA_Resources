/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005804b0; name: FUN_005804b0
 */


undefined8 FUN_005804b0(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  ulong local_48;
  size_t local_40;
  void *local_38;
  undefined8 local_28;
  
  pcVar2 = getenv("TZ");
  pcVar3 = ":localtime";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  pcVar2 = pcVar3 + 1;
  if (*pcVar3 != ':') {
    pcVar2 = pcVar3;
  }
  iVar1 = strcmp(pcVar2,"localtime");
  if (iVar1 == 0) {
    pcVar3 = getenv("LOCALTIME");
    pcVar2 = "/etc/localtime";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
  }
  local_40 = 0;
  local_38 = (void *)0x0;
  local_48 = 0;
  __n = strlen(pcVar2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (__n == 0) goto LAB_00580590;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_48 = uVar4 | 1;
    local_40 = __n;
    local_38 = __dest;
  }
  memcpy(__dest,pcVar2,__n);
LAB_00580590:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_28 = 0;
                    /* try { // try from 00580598 to 005805a3 has its CatchHandler @ 005805d8 */
  FUN_00580e50(&local_48,&local_28);
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return local_28;
}


