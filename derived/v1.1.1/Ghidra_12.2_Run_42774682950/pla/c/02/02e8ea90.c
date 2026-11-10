/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ea90; name: FUN_02e8ea90
 */


void FUN_02e8ea90(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (((*(byte *)(param_2 + 0x68) >> 2 & 1) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x68));
    if (*(int *)(param_2 + 0x34) != 0) {
      uVar8 = 0;
      do {
        uVar3 = *(uint *)(*(long *)(param_2 + 0x20) + uVar8 * 0xc);
        if ((uVar3 != 0) && (uVar2 = *(uint *)(param_1 + 0x98), uVar2 != 0)) {
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = uVar3 / uVar2;
          }
          uVar5 = (ulong)(uVar3 - uVar4 * uVar2);
          puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar5 * 8);
          if (puVar7 != (undefined8 *)0x0) {
            if (*(uint *)(puVar7 + 1) == uVar3) {
              puVar6 = (undefined8 *)0x0;
            }
            else {
              do {
                puVar6 = puVar7;
                puVar7 = (undefined8 *)*puVar6;
                if (puVar7 == (undefined8 *)0x0) goto LAB_02e8eb08;
              } while (*(uint *)(puVar7 + 1) != uVar3);
            }
            iVar1 = *(int *)(puVar7 + 6);
            *(int *)(puVar7 + 6) = iVar1 + -1;
            if (iVar1 + -1 == 0) {
              if (puVar7[2] != 0) {
                (*DAT_0442d158)(*(undefined4 *)((long)puVar7 + 0x1c));
                puVar7[2] = 0;
                puVar7[3] = 0xffffffff00000000;
                if (*(int *)(puVar7 + 6) != 0) goto LAB_02e8eb08;
              }
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar5 * 8);
              }
              *puVar6 = *puVar7;
              if (puVar7[4] != 0) {
                *(undefined4 *)(puVar7 + 5) = 0;
                (*DAT_0442d150)(0);
                puVar7[4] = 0;
                *(undefined4 *)((long)puVar7 + 0x2c) = 0;
              }
              (*DAT_0442d150)(0,puVar7);
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
            }
          }
        }
LAB_02e8eb08:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_2 + 0x34));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfb;
  }
  return;
}


