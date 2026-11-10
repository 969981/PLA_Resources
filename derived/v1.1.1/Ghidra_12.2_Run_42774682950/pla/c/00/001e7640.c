/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7640; name: FUN_001e7640
 */


ulong FUN_001e7640(long param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
LAB_001e7754:
    uVar2 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 - 3U < 0xe) {
      **(long **)(param_1 + 0x10) = param_1;
      iVar5 = *(int *)(param_1 + 0x60);
    }
    uVar2 = 0;
    switch(iVar5) {
    case 3:
      if ((*(byte *)(**(long **)(param_1 + 0x10) + 0xf47) & 1) == 0) {
        uVar2 = FUN_001dfbe8(*(long **)(param_1 + 0x10),param_2,5);
        return uVar2;
      }
      return 0;
    case 4:
      lVar3 = *(long *)(param_1 + 0x10);
      if ((*(int *)(lVar3 + 0x178) == 2) && (*(char *)(lVar3 + 0x3f8) == '\0')) {
        uVar2 = FUN_00203df8(lVar3,param_2,5);
        return uVar2;
      }
      lVar6 = 0;
      uVar2 = 0;
      iVar5 = 0;
      do {
        iVar1 = *(int *)(lVar3 + 0x260 + lVar6);
        if (iVar1 != -1) {
          param_2[iVar5] = iVar1;
          uVar4 = iVar5 + 0x10;
          iVar5 = iVar5 + 1;
          uVar2 = (ulong)(1 << (ulong)(uVar4 & 0x1f) | (uint)uVar2);
        }
        lVar6 = lVar6 + 4;
      } while (lVar6 != 8);
      break;
    case 5:
      lVar3 = *(long *)(param_1 + 0x10);
      *param_2 = *(undefined4 *)(lVar3 + 600);
      uVar4 = 0x10000;
      if (*(long *)(lVar3 + 0x658) != 0) {
        uVar4 = 1;
      }
      return (ulong)uVar4;
    case 6:
    case 7:
      uVar2 = FUN_001fd340(*(undefined8 *)(param_1 + 0x10),param_2,5);
      return uVar2;
    case 9:
    case 10:
      uVar2 = FUN_001fd360(*(undefined8 *)(param_1 + 0x10),param_2,5);
      return uVar2;
    case 0xb:
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + 0x420) + 0x50);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001e7750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(lVar3,param_2,5);
        return uVar2;
      }
      goto LAB_001e7754;
    case 0xc:
    case 0xd:
    case 0xe:
      uVar2 = FUN_001fa440(*(undefined8 *)(param_1 + 0x10),param_2,5);
      return uVar2;
    }
  }
  return uVar2;
}


