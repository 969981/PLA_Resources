/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c15f0; name: FUN_004c15f0
 */


ulong FUN_004c15f0(int *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint local_14;
  
  local_14 = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x122) + 0x188);
  if (lVar4 == 0) {
    FUN_004dd470(&local_14,param_1,0x5000e);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x238) + 0x1c);
    if ((*param_1 < 0x301) || ((uVar1 >> 4 & 1) == 0)) {
      if (((((*param_1 != 0x300) || ((uVar1 >> 1 & 1) == 0)) ||
           ((uVar3 = FUN_004cb590(param_2,5,1), (int)uVar3 != 0 &&
            (uVar3 = FUN_004cb590(param_2,6,1), (int)uVar3 != 0)))) &&
          (((local_14 & 1) != 0 || (uVar3 = FUN_004cb590(param_2,1,1), (int)uVar3 != 0)))) &&
         ((((local_14 >> 1 & 1) != 0 || (uVar3 = FUN_004cb590(param_2,2,1), (int)uVar3 != 0)) &&
          ((*param_1 < 0x301 ||
           ((((byte)local_14 >> 3 & 1) != 0 ||
            (uVar3 = FUN_004cb590(param_2,0x40,1), (int)uVar3 != 0)))))))) {
        return 1;
      }
    }
    else {
      uVar3 = FUN_004cb590(param_2,0x16,1);
      if (((int)uVar3 != 0) && (uVar3 = FUN_004cb590(param_2,0xee,1), (int)uVar3 != 0)) {
        iVar2 = FUN_004cb590(param_2,0xef,1);
        return (ulong)(iVar2 != 0);
      }
    }
  }
  else {
    uVar3 = FUN_004cb7f0(param_2,lVar4,*(undefined8 *)(*(long *)(param_1 + 0x122) + 400));
  }
  return uVar3;
}


