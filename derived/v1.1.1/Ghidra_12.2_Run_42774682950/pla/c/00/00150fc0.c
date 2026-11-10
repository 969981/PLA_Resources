/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150fc0; name: FUN_00150fc0
 */


ulong FUN_00150fc0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        plVar3 = &DAT_039c5c28;
        if ((int)plVar4[1] != 0x16) {
          lVar5 = *plVar4;
          plVar3 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
            plVar3 = (long *)(lVar5 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar3) {
      plVar3 = &DAT_039c5c28;
    }
  }
  uVar2 = 0;
  switch(*(uint *)(plVar3 + 1) & 0x3f) {
  case 4:
    return (ulong)*(byte *)(*plVar3 + 0xb);
  case 5:
    iVar1 = FUN_00172700(*plVar3);
    uVar2 = (ulong)iVar1;
    break;
  case 7:
    return *(ulong *)(*plVar3 + 0x18);
  case 0x14:
    return *(ulong *)(*plVar3 + 0x10);
  }
  return uVar2;
}


