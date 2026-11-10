/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265300; name: FUN_00265300
 */


uint FUN_00265300(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *param_1;
  lVar6 = *(long *)(lVar5 + 0x3e0);
  lVar7 = *(long *)(lVar5 + 1000);
  if ((*(long *)(lVar5 + 0x3f0) == 0) ||
     (pcVar4 = *(code **)(*(long *)(lVar5 + 0x3f0) + 8), pcVar4 == (code *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*pcVar4)(param_1);
    uVar3 = uVar3 & 0xffffffff;
  }
  if ((lVar6 == 0) || (pcVar4 = *(code **)(lVar6 + 8), pcVar4 == (code *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*pcVar4)(param_1);
  }
  if ((lVar7 == 0) || (pcVar4 = *(code **)(lVar7 + 8), pcVar4 == (code *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*pcVar4)(param_1);
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return uVar1 & uVar2 & 1;
}


