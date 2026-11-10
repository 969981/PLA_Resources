/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020afe8; name: FUN_0020afe8
 */


undefined4 FUN_0020afe8(long param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined4 uVar3;
  undefined1 auStack_130 [128];
  
  if ((*(long *)(param_1 + 0x880) == 0) && (*(long *)(param_1 + 0x888) == 0)) {
LAB_0020b110:
    uVar3 = 0;
  }
  else {
    iVar2 = vsnprintf((char *)0x0,0,param_3,auStack_130 + 0xa0);
    if (-1 < iVar2) {
      lVar1 = param_1 + 0x890;
      __s = (char *)FUN_0020c738(lVar1,(long)(iVar2 + 1));
      if (__s != (char *)0x0) {
        iVar2 = vsnprintf(__s,(long)(iVar2 + 1),param_3,auStack_130 + 0x80);
        if (-1 < iVar2) {
          if (*(code **)(param_1 + 0x888) == (code *)0x0) {
            iVar2 = (**(code **)(param_1 + 0x880))
                              (param_1,__s,(long)iVar2,*(undefined8 *)(param_1 + 0x8b8));
          }
          else {
            iVar2 = (**(code **)(param_1 + 0x888))
                              (param_1,param_2,__s,(long)iVar2,*(undefined8 *)(param_1 + 0x8b8));
          }
          FUN_0020c748(lVar1,__s);
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = 0xfffffc7a;
          }
          return uVar3;
        }
        FUN_0020c748(lVar1,__s);
        goto LAB_0020b110;
      }
    }
    uVar3 = 0xfffffc7b;
  }
  return uVar3;
}


