/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed7ba4; name: FUN_02ed7ba4
 */


int FUN_02ed7ba4(long *param_1,long *param_2,int *param_3,uint param_4)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  MutexType *pMVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  ushort *puVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  
  iVar11 = (**(code **)(*param_1 + 0x210))();
  if ((iVar11 == 1) && ((param_4 & 1) == 0)) {
    bVar4 = *(byte *)*param_2;
    *param_2 = (long)((byte *)*param_2 + 1);
    *(uint *)((long)param_1 + 0xaa) =
         *(uint *)((long)param_1 + 0xaa) & 0xffffc000 |
         *(uint *)((long)param_1 + 0xaa) & 0x1fff | (bVar4 & 1) << 0xd;
    puVar12 = (uint *)*param_2 + 1;
    uVar15 = *(uint *)*param_2;
    *param_2 = (long)puVar12;
    pMVar10 = DAT_0440a120;
    if (uVar15 == 0) {
LAB_02ed7c20:
      uVar15 = *puVar12;
      *param_2 = (long)(puVar12 + 1);
      pMVar10 = DAT_0440a120;
      if (uVar15 != 0) {
        nn::os::LockMutex(DAT_0440a120);
        uVar17 = *(uint *)(pMVar10 + 0x28);
        if (uVar17 != 0) {
          uVar8 = 0;
          if (uVar17 != 0) {
            uVar8 = uVar15 / uVar17;
          }
          for (plVar16 = *(long **)(*(long *)(pMVar10 + 0x20) + (ulong)(uVar15 - uVar8 * uVar17) * 8
                                   ); plVar16 != (long *)0x0; plVar16 = (long *)plVar16[1]) {
            if (*(uint *)(plVar16 + 2) == uVar15) {
              *(int *)((long)plVar16 + 0x14) = *(int *)((long)plVar16 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar10);
              (**(code **)(*param_1 + 0x10))(param_1);
              iVar11 = (**(code **)(*plVar16 + 0x50))(plVar16,param_1);
              (**(code **)(*plVar16 + 0x18))(plVar16);
              if (iVar11 != 1) {
                return iVar11;
              }
              goto LAB_02ed7cc8;
            }
          }
        }
        nn::os::UnlockMutex(pMVar10);
      }
LAB_02ed7cc8:
      bVar4 = *(byte *)*param_2;
      *param_2 = (long)((byte *)*param_2 + 1);
      uVar15 = *(uint *)(param_1 + 0x14);
      if ((bVar4 & 1) != (uVar15 & 1)) {
        uVar17 = uVar15 | 1;
        if ((bVar4 & 1) == 0) {
          uVar17 = uVar15 & 0xfffffffe;
        }
        *(uint *)(param_1 + 0x14) = uVar17;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
      }
      uVar15 = *(uint *)((long)param_1 + 0xaa);
      if ((bVar4 >> 1 & 1) != (uVar15 & 0x8000) >> 0xf) {
        *(uint *)((long)param_1 + 0xaa) = uVar15 & 0xffff7fff | (bVar4 & 2) << 0xe;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
        uVar15 = *(uint *)((long)param_1 + 0xaa);
      }
      *(uint *)((long)param_1 + 0xaa) =
           uVar15 & 0xf8000000 | uVar15 & 0x7fffff | (bVar4 >> 2 & 0xf) << 0x17;
      iVar11 = (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
      if ((((iVar11 == 1) && (iVar11 = FUN_02ed7344(param_1,param_2), iVar11 == 1)) &&
          (iVar11 = (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3), iVar11 == 1)) &&
         ((iVar11 = (**(code **)(*param_1 + 0x220))(param_1,param_2,param_3), iVar11 == 1 &&
          (iVar11 = (**(code **)(param_1[3] + 0x70))(param_1 + 3,param_2,param_3), iVar11 == 1)))) {
        puVar14 = (ushort *)*param_2 + 1;
        uVar6 = *(ushort *)*param_2;
        *param_2 = (long)puVar14;
        uVar15 = (uint)uVar6;
        if (uVar15 != 0) {
          uVar17 = 0;
          while( true ) {
            uVar2 = *(undefined4 *)puVar14;
            *param_2 = (long)(puVar14 + 2);
            uVar6 = puVar14[2];
            *param_2 = (long)puVar14 + 5;
            uVar5 = *(undefined1 *)((long)puVar14 + 5);
            *param_2 = (long)(puVar14 + 3);
            bVar4 = (byte)puVar14[3];
            *param_2 = (long)puVar14 + 7;
            uVar8 = bVar4 & 0x7f;
            pbVar9 = (byte *)((long)puVar14 + 7);
            while ((char)bVar4 < '\0') {
              bVar4 = *pbVar9;
              uVar8 = bVar4 & 0x7f | uVar8 << 7;
              *param_2 = (long)(pbVar9 + 1);
              pbVar9 = pbVar9 + 1;
            }
            uVar3 = *(undefined4 *)pbVar9;
            *param_2 = (long)(pbVar9 + 4);
            bVar4 = pbVar9[4];
            *param_2 = (long)(pbVar9 + 5);
            uVar7 = *(ushort *)(pbVar9 + 5);
            *param_2 = (long)(pbVar9 + 7);
            iVar11 = (**(code **)(*param_1 + 0x1e0))
                               (param_1,uVar2,(char)uVar6,uVar5,uVar8,uVar3,bVar4,pbVar9 + 7,uVar7,1
                               );
            if (iVar11 != 1) goto LAB_02ed7db0;
            lVar13 = (ulong)uVar7 * 0xc;
            *param_2 = *param_2 + lVar13;
            uVar17 = uVar17 + 1;
            *param_3 = *param_3 - (int)lVar13;
            if (uVar17 == uVar15) break;
            puVar14 = (ushort *)*param_2;
          }
          iVar11 = 1;
        }
      }
    }
    else {
      pMVar1 = DAT_0440a120 + 0x38;
      nn::os::LockMutex(pMVar1);
      uVar17 = *(uint *)(pMVar10 + 0x60);
      if (uVar17 != 0) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar15 / uVar17;
        }
        for (plVar16 = *(long **)(*(long *)(pMVar10 + 0x58) + (ulong)(uVar15 - uVar8 * uVar17) * 8);
            plVar16 != (long *)0x0; plVar16 = (long *)plVar16[1]) {
          if (*(uint *)(plVar16 + 2) == uVar15) {
            *(int *)((long)plVar16 + 0x14) = *(int *)((long)plVar16 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            (**(code **)(*param_1 + 0x10))(param_1);
            iVar11 = (**(code **)(*plVar16 + 0x50))(plVar16,param_1);
            (**(code **)(*plVar16 + 0x18))(plVar16);
            if (iVar11 != 1) {
              return iVar11;
            }
            puVar12 = (uint *)*param_2;
            goto LAB_02ed7c20;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      iVar11 = 2;
    }
  }
LAB_02ed7db0:
  return iVar11;
}


