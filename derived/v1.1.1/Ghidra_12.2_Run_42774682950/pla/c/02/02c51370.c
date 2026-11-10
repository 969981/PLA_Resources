/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c51370; name: FUN_02c51370
 */


ulong FUN_02c51370(undefined8 *param_1,int param_2)

{
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  char *param4;
  char *__s;
  char acStack_170 [63];
  undefined1 local_131;
  char acStack_130 [255];
  undefined1 local_31;
  
  uVar1 = snprintf(acStack_170,0x3f,"waza%04d.wazabin",param_2);
  uVar3 = (ulong)uVar1;
  local_131 = 0;
  __s = *(char **)(DAT_04407c08 + 8);
  if (__s == (char *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = &DAT_cbf29ce484222645;
    param_1[2] = &DAT_03996322;
    param_1[3] = 0;
  }
  else {
    sVar2 = strlen(__s);
    param4 = "";
    if ((sVar2 != 0) && (param4 = "", __s[sVar2 - 1] != '/')) {
      param4 = "/";
    }
    snprintf(acStack_130,0xff,"%s%s%s",__s,param4,acStack_170);
    local_31 = 0;
    uVar3 = FUN_01559fc0(param_1,acStack_130);
  }
  return uVar3;
}


