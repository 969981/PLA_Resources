/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01745960; name: FUN_01745960
 */


void FUN_01745960(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *__s;
  size_t sVar5;
  code *pcVar6;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04380bb0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_01745128();
    lVar3 = (*pcVar6)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar2 + 0xe0);
  if ((*(ulong *)(lVar2 + 0xe8) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0xe8) >> 1)));
  }
  __s = (char *)(*pcVar6)();
  FUN_0014ff10(param_1,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_1);
    return;
  }
  sVar5 = strlen(__s);
  FUN_001514f0(param_1,__s,sVar5);
  return;
}


