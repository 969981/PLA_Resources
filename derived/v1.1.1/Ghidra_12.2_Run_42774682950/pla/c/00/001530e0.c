/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001530e0; name: FUN_001530e0
 */


ulong FUN_001530e0(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0xffffffff;
  if (param_2 < 10) {
    lVar5 = *(long *)(param_1 + 0x18);
    switch(param_2) {
    case 0:
      uVar4 = 0;
      *(undefined1 *)(lVar5 + 0x57) = 0;
      break;
    case 1:
      FUN_0016ca20(lVar5,0);
      *(undefined1 *)(lVar5 + 0x57) = 1;
      return 0;
    case 2:
      FUN_0015dde0(param_1,0);
      return 0;
    case 3:
      return (ulong)(*(long *)(lVar5 + 0x18) + *(long *)(lVar5 + 0x10)) >> 10;
    case 4:
      return (ulong)(*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 0x10) & 0x3ff);
    case 5:
      uVar3 = *(undefined1 *)(lVar5 + 0x57);
      *(undefined1 *)(lVar5 + 0x57) = 1;
      if (param_3 == 0) {
        FUN_0016ca20(lVar5,0xfffffffffffff6a0);
        FUN_0015dc70(param_1);
        *(undefined1 *)(lVar5 + 0x57) = uVar3;
      }
      else {
        lVar1 = *(long *)(lVar5 + 0x18) + (long)param_3 * 0x400;
        FUN_0016ca20(lVar5,lVar1);
        if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
          FUN_0015dc70(param_1);
        }
        *(undefined1 *)(lVar5 + 0x57) = uVar3;
        if (lVar1 < 1) {
          return 0;
        }
      }
      return (ulong)(*(char *)(lVar5 + 0x55) == '\a');
    case 6:
      uVar2 = *(uint *)(lVar5 + 0xb4);
      *(int *)(lVar5 + 0xb4) = param_3;
      return (ulong)uVar2;
    case 7:
      uVar2 = *(uint *)(lVar5 + 0xb8);
      if (param_3 < 0x29) {
        param_3 = 0x28;
      }
      *(int *)(lVar5 + 0xb8) = param_3;
      return (ulong)uVar2;
    case 9:
      return (ulong)*(byte *)(lVar5 + 0x57);
    }
  }
  return uVar4;
}


