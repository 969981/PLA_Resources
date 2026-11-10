/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016f5b08; name: FUN_016f5b08
 */


void FUN_016f5b08(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *__s;
  size_t sVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((DAT_043cd488 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_016f57c4();
    lVar3 = (*pcVar6)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar2 + 0x118);
  if ((*(ulong *)(lVar2 + 0x120) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x120) >> 1)));
  }
  __s = (char *)(*pcVar6)();
  FUN_0014ff10(param_1,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_1);
    return;
  }
  sVar4 = strlen(__s);
  FUN_001514f0(param_1,__s,sVar4);
  return;
}


