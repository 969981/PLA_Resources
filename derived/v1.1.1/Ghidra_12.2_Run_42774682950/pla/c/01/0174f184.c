/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0174f184; name: FUN_0174f184
 */


void FUN_0174f184(undefined8 param_1)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437fe50 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_015c1abc();
    lVar4 = (*pcVar6)(lVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar3 + 0x90);
  if ((*(ulong *)(lVar3 + 0x98) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x98) >> 1)));
  }
  __s = (char *)(*pcVar6)();
  FUN_0014ff10(param_1,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_1);
    return;
  }
  sVar2 = strlen(__s);
  FUN_001514f0(param_1,__s,sVar2);
  return;
}


