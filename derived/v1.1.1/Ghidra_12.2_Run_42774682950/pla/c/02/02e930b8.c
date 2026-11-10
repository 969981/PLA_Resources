/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e930b8; name: FUN_02e930b8
 */


int FUN_02e930b8(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  byte local_78 [4];
  uint local_74;
  undefined1 auStack_70 [4];
  uint local_6c;
  uint local_64;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 8;
    do {
      local_64 = 0;
      iVar6 = FUN_02e9b7a4(lVar1,auStack_70,8,&local_64);
      if (iVar6 != 1) {
        return iVar6;
      }
      if (local_64 != 8) {
        return 0x38;
      }
      param_2 = param_2 + -8;
      if (local_6c != 0) {
        uVar9 = 0;
        do {
          local_64 = 0;
          iVar6 = FUN_02e9b7a4(lVar1,&local_74,4,&local_64);
          if (iVar6 != 1) {
            return iVar6;
          }
          if (local_64 != 4) {
            return 0x38;
          }
          local_64 = 0;
          iVar6 = FUN_02e9b7a4(lVar1,local_78,1,&local_64);
          if (iVar6 != 1) {
            return iVar6;
          }
          if (local_64 != 1) {
            return 0x38;
          }
          uVar2 = *(uint *)(param_1 + 0xd0);
          if (uVar2 != 0) {
            uVar4 = 0;
            if (uVar2 != 0) {
              uVar4 = local_74 / uVar2;
            }
            for (plVar8 = *(long **)(*(long *)(param_1 + 200) +
                                    (ulong)(local_74 - uVar4 * uVar2) * 8); plVar8 != (long *)0x0;
                plVar8 = (long *)*plVar8) {
              if (*(uint *)(plVar8 + 1) == local_74) {
                FUN_02e9b658(lVar1,local_78[0],&local_64);
                bVar3 = local_78[0];
                goto LAB_02e93264;
              }
            }
          }
          lVar7 = (*DAT_0442d138)(0,(ulong)local_78[0] + 5);
          bVar5 = local_78[0];
          if (lVar7 == 0) {
            return 0x34;
          }
          *(undefined1 *)(lVar7 + (ulong)local_78[0]) = 0x2e;
          *(undefined1 *)((ulong)local_78[0] + lVar7 + 1) = 0x62;
          *(undefined1 *)((ulong)local_78[0] + lVar7 + 2) = 0x6e;
          *(undefined1 *)((ulong)local_78[0] + lVar7 + 3) = 0x6b;
          *(undefined1 *)((ulong)local_78[0] + lVar7 + 4) = 0;
          local_64 = 0;
          iVar6 = FUN_02e9b7a4(lVar1,lVar7,local_78[0],&local_64);
          bVar3 = local_78[0];
          if (iVar6 != 1) {
LAB_02e932e0:
            (*DAT_0442d150)(0,lVar7);
            return iVar6;
          }
          if (local_64 != bVar5) {
            iVar6 = 0x38;
            goto LAB_02e932e0;
          }
          plVar8 = (long *)FUN_02e95f50(param_1 + 0xc0,local_74);
          if (plVar8 == (long *)0x0) {
            iVar6 = 0x34;
            goto LAB_02e932e0;
          }
          *plVar8 = lVar7;
LAB_02e93264:
          param_2 = (param_2 + -5) - (uint)bVar3;
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_6c);
      }
    } while (param_2 != 0);
  }
  return 1;
}


