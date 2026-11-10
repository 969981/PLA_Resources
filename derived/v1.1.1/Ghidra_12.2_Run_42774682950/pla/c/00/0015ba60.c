/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015ba60; name: FUN_0015ba60
 */


void FUN_0015ba60(undefined8 param_1,long *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  char *__s;
  uint uVar6;
  
  lVar5 = *(long *)*param_2;
  *(long *)*param_2 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar6 = FUN_001790d0();
    __s = (char *)param_2[10];
    if (uVar6 != 0x1b) goto LAB_0015bae8;
  }
  else {
    pbVar4 = *(byte **)(*param_2 + 8);
    *(byte **)(*param_2 + 8) = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar6 = (uint)bVar1;
    __s = (char *)param_2[10];
    if (bVar1 != 0x1b) {
LAB_0015bae8:
      if ((__s != (char *)0x0) && (pcVar2 = strchr(__s,0x74), pcVar2 == (char *)0x0)) {
        pcVar2 = "text";
        goto LAB_0015bb54;
      }
      uVar3 = FUN_00163720(param_1,*param_2,param_2 + 1,param_2 + 4,param_2[0xb],uVar6);
      goto LAB_0015bb18;
    }
  }
  if ((__s != (char *)0x0) && (pcVar2 = strchr(__s,0x62), pcVar2 == (char *)0x0)) {
    pcVar2 = "binary";
LAB_0015bb54:
    FUN_00162fa0(param_1,"attempt to load a %s chunk (mode is \'%s\')",pcVar2,__s);
                    /* WARNING: Subroutine does not return */
    FUN_0015a320(param_1,3);
  }
  uVar3 = FUN_00173e20(param_1,*param_2,param_2[0xb]);
LAB_0015bb18:
  FUN_0015c730(param_1,uVar3);
  return;
}


