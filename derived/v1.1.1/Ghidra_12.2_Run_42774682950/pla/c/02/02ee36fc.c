/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee36fc; name: FUN_02ee36fc
 */


void FUN_02ee36fc(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x40))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x48);
        }
        *(uint *)(param_1 + 0x48) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x58);
        goto joined_r0x02ee3788;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x58);
joined_r0x02ee3788:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x50);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x50))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x58);
        }
        *(uint *)(param_1 + 0x58) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x68);
        goto joined_r0x02ee3710;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
joined_r0x02ee3710:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x60);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x60))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x68) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x78);
        goto joined_r0x02ee3820;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x78);
joined_r0x02ee3820:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x70);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x70))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x78);
        }
        *(uint *)(param_1 + 0x78) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x88);
        goto joined_r0x02ee3720;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x88);
joined_r0x02ee3720:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x80);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x80))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x88);
        }
        *(uint *)(param_1 + 0x88) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x98);
        goto joined_r0x02ee38b8;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x98);
joined_r0x02ee38b8:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x90);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x90))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0x98) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0xa8);
        goto joined_r0x02ee3730;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xa8);
joined_r0x02ee3730:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0xa0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xa0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0xb8);
        goto joined_r0x02ee3950;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xb8);
joined_r0x02ee3950:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0xb0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xb0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0xb8);
        }
        *(uint *)(param_1 + 0xb8) = uVar1 - 1;
        return;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  return;
}


