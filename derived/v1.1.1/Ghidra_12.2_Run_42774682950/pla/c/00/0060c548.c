/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060c548; name: FUN_0060c548
 */


undefined8 FUN_0060c548(long param_1,int *param_2)

{
  ulong *puVar1;
  size_t __n;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  void *__src;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  uVar5 = *(ushort *)(param_1 + 8);
  uVar6 = uVar5 >> 8 | uVar5 << 8;
  if (*param_2 != 0) {
    uVar6 = uVar5;
  }
  if (*(long *)(param_2 + 6) == 0 && *(ulong *)(param_2 + 4) != 0) goto LAB_0060c8ac;
  puVar1 = (ulong *)(param_2 + 2);
  uVar13 = *puVar1;
  if (*(ulong *)(param_2 + 4) < uVar13) goto LAB_0060c8ac;
  uVar15 = uVar13 + 2;
  FUN_0060b82c(puVar1,uVar15,1);
  *(ushort *)(*(long *)(param_2 + 6) + *(long *)(param_2 + 2)) = uVar6;
  *(ulong *)(param_2 + 2) = uVar15;
  if ((*(ulong *)(param_2 + 4) < uVar15) ||
     (*(long *)(param_2 + 6) == 0 && *(ulong *)(param_2 + 4) != 0)) goto LAB_0060c918;
  uVar5 = *(ushort *)(param_1 + 10);
  uVar15 = uVar13 + 4;
  uVar6 = uVar5 >> 8 | uVar5 << 8;
  if (*param_2 != 0) {
    uVar6 = uVar5;
  }
  FUN_0060b82c(puVar1,uVar15,1);
  *(ushort *)(*(long *)(param_2 + 6) + *(long *)(param_2 + 2)) = uVar6;
  *(ulong *)(param_2 + 2) = uVar15;
  uVar7 = *(ulong *)(param_2 + 4);
  lVar8 = *(long *)(param_2 + 6);
  if ((uVar7 < uVar15) || (lVar8 == 0 && uVar7 != 0)) goto LAB_0060c918;
  bVar4 = *(byte *)(param_1 + 0x10);
  uVar10 = (ulong)bVar4;
  bVar9 = bVar4 & 1;
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 != 0x10) {
LAB_0060c65c:
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 != 0xc) {
LAB_0060c8f8:
                    /* WARNING: Subroutine does not return */
          FUN_00607c30("external/webrtc/p2p/base/stun.cc",0x3e,
                       "transaction_id_.size() == kStunTransactionIdLength",PTR_DAT_043752a0);
        }
      }
      else if (*(long *)(param_1 + 0x18) != 0xc) goto LAB_0060c8f8;
      uVar3 = *(uint *)(param_1 + 0x40);
      uVar15 = uVar13 + 8;
      uVar14 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
      if (*param_2 != 0) {
        uVar14 = uVar3;
      }
      FUN_0060b82c(puVar1,uVar15,1);
      *(uint *)(*(long *)(param_2 + 6) + *(long *)(param_2 + 2)) = uVar14;
      *(ulong *)(param_2 + 2) = uVar15;
      uVar7 = *(ulong *)(param_2 + 4);
      lVar8 = *(long *)(param_2 + 6);
      if ((uVar7 < uVar15) || (lVar8 == 0 && uVar7 != 0)) goto LAB_0060c918;
      bVar9 = *(byte *)(param_1 + 0x10);
      uVar10 = (ulong)bVar9;
      bVar9 = bVar9 & 1;
    }
  }
  else if (*(long *)(param_1 + 0x18) != 0x10) goto LAB_0060c65c;
  __n = uVar10 >> 1;
  if (bVar9 != 0) {
    __n = *(size_t *)(param_1 + 0x18);
  }
  if ((uVar7 == 0 || lVar8 != 0) && (uVar15 <= uVar7)) {
    __src = *(void **)(param_1 + 0x20);
    uVar15 = uVar15 + __n;
    if (bVar9 == 0) {
      __src = (void *)(param_1 + 0x11);
    }
    FUN_0060b82c(puVar1,uVar15,1);
    memcpy((void *)(*(long *)(param_2 + 6) + *(long *)(param_2 + 2)),__src,__n);
    uVar13 = *(ulong *)(param_2 + 4);
    *(ulong *)(param_2 + 2) = uVar15;
    if ((uVar13 < uVar15) || (*(long *)(param_2 + 6) == 0 && uVar13 != 0)) {
LAB_0060c918:
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x109,"IsConsistent()",PTR_DAT_043752a0);
    }
    plVar12 = *(long **)(param_1 + 0x28);
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar12 == plVar2) {
      return 1;
    }
    uVar6 = *(ushort *)(*plVar12 + 8);
    if ((*(long *)(param_2 + 6) != 0) || (uVar13 == 0)) {
      uVar14 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      if (*param_2 != 0) {
        uVar14 = (uint)uVar6;
      }
      do {
        uVar15 = *puVar1;
        if (uVar13 < uVar15) break;
        uVar13 = uVar15 + 2;
        FUN_0060b82c(puVar1,uVar13,1);
        *(short *)(*(long *)(param_2 + 6) + *(long *)(param_2 + 2)) = (short)uVar14;
        *(ulong *)(param_2 + 2) = uVar13;
        if ((*(ulong *)(param_2 + 4) < uVar13) ||
           (*(long *)(param_2 + 6) == 0 && *(ulong *)(param_2 + 4) != 0)) goto LAB_0060c918;
        uVar15 = uVar15 + 4;
        uVar5 = *(ushort *)(*plVar12 + 10);
        uVar6 = uVar5 >> 8 | uVar5 << 8;
        if (*param_2 != 0) {
          uVar6 = uVar5;
        }
        FUN_0060b82c(puVar1,uVar15,1);
        *(ushort *)(*(long *)(param_2 + 6) + *(long *)(param_2 + 2)) = uVar6;
        *(ulong *)(param_2 + 2) = uVar15;
        if ((*(ulong *)(param_2 + 4) < uVar15) ||
           (*(long *)(param_2 + 6) == 0 && *(ulong *)(param_2 + 4) != 0)) goto LAB_0060c918;
        plVar11 = plVar12 + 1;
        uVar13 = (**(code **)(*(long *)*plVar12 + 0x28))((long *)*plVar12,param_2);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        if (plVar2 + -1 == plVar12) {
          return 1;
        }
        uVar6 = *(ushort *)(plVar12[1] + 8);
        uVar13 = *(ulong *)(param_2 + 4);
        uVar14 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
        if (*param_2 != 0) {
          uVar14 = (uint)uVar6;
        }
        plVar12 = plVar11;
      } while ((*(long *)(param_2 + 6) != 0) || (uVar13 == 0));
    }
  }
LAB_0060c8ac:
                    /* WARNING: Subroutine does not return */
  FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x103,"IsConsistent()",PTR_DAT_043752a0);
}


