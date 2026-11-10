/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c50c00; name: FUN_02c50c00
 */


void FUN_02c50c00(long param_1,undefined8 param_2)

{
  size_t sVar1;
  char *param4;
  char *__s;
  long *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 uStack_148;
  char acStack_140 [255];
  undefined1 local_41;
  
  __s = *(char **)(DAT_04407c08 + 0x28);
  if (__s == (char *)0x0) {
    local_150 = (long *)0x0;
    uStack_148 = 0;
    local_170 = (long *)0x0;
    puStack_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    uStack_158 = 0;
  }
  else {
    sVar1 = strlen(__s);
    param4 = "";
    if ((sVar1 != 0) && (param4 = "", __s[sVar1 - 1] != '/')) {
      param4 = "/";
    }
    snprintf(acStack_140,0xff,"%s%s%s",__s,param4,"item.dat");
    local_41 = 0;
    FUN_01559fc0(&local_170,acStack_140);
  }
  FUN_00938764(param_1 + 0x50,0,&local_170,0,param_2,0);
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x250);
  return;
}


