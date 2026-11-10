/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cbc40; name: FUN_004cbc40
 */


int FUN_004cbc40(int *param_1,int param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong local_68;
  
  iVar3 = FUN_004ce190();
  if ((iVar3 == 0) ||
     (uVar11 = *(ulong *)(*(long *)(param_1 + 0x2c) + 0x130), uVar5 = FUN_004ce2c0(param_1),
     uVar11 < uVar5)) {
    return -1;
  }
  if (((param_2 == 0x16) && (*(long *)(param_1 + 0x28) == 0)) &&
     (*(long *)(param_1 + 0x26) != *(long *)(*(long *)(param_1 + 0x2c) + 0x140) + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: s->init_num == s->d1->w_msg_hdr.msg_len + DTLS1_HM_HEADER_LENGTH"
                 ,"external/openssl/ssl/statem/statem_dtls.c",0x81);
  }
  lVar6 = *(long *)(param_1 + 0x120);
  if (lVar6 == 0) {
LAB_004cbd10:
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x11a);
  }
  else {
    if (*(long *)(param_1 + 0x11a) != 0) {
      FUN_0041c7c0(*(long *)(param_1 + 0x11a));
      uVar4 = FUN_0041c7b0();
      if ((uVar4 >> 0x15 & 1) != 0) goto LAB_004cbd10;
      lVar6 = *(long *)(param_1 + 0x120);
    }
    FUN_0041cd10(lVar6);
    iVar3 = FUN_0041ccc0();
    lVar6 = (long)iVar3;
    lVar7 = *(long *)(param_1 + 0x11a);
  }
  if (lVar7 != 0) {
    FUN_0041c7c0();
    uVar5 = FUN_0041c7b0();
    if ((uVar5 & 0xf0007) == 2) {
      iVar3 = FUN_0041cbf0(*(undefined8 *)(param_1 + 0x11a));
      lVar7 = (long)(iVar3 << 1);
      goto LAB_004cbd50;
    }
  }
  lVar7 = 0;
LAB_004cbd50:
  plVar12 = (long *)(param_1 + 0x26);
  lVar9 = *plVar12;
  param_1[10] = 1;
  if (lVar9 != 0) {
    lVar7 = lVar7 + lVar6;
    lVar6 = 0;
    bVar2 = true;
    do {
      if ((param_2 == 0x16) && (uVar5 = *(ulong *)(param_1 + 0x28), uVar5 != 0)) {
        if (lVar6 == 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x2c) + 0x150);
        }
        else {
          if (uVar5 < 0xd) {
            return -1;
          }
          *(long *)(param_1 + 0x26) = lVar9 + 0xc;
          *(ulong *)(param_1 + 0x28) = uVar5 - 0xc;
        }
      }
      lVar9 = FUN_00404920(*(undefined8 *)(param_1 + 6),0xd,0,0);
      uVar5 = lVar7 + ((lVar9 << 0x20) + 0xd00000000 >> 0x20);
      lVar9 = *(long *)(param_1 + 0x2c);
      uVar11 = *(ulong *)(lVar9 + 0x130) - uVar5;
      if ((*(ulong *)(lVar9 + 0x130) < uVar5 || uVar11 == 0) || uVar11 < 0xd) {
        iVar3 = FUN_00404920(*(undefined8 *)(param_1 + 6),0xb,0,0);
        if (iVar3 < 1) {
          param_1[10] = 2;
          return iVar3;
        }
        lVar9 = *(long *)(param_1 + 0x2c);
        if (*(ulong *)(lVar9 + 0x130) <= lVar7 + 0x19U) {
          return -1;
        }
        uVar11 = *(ulong *)(lVar9 + 0x130) - (lVar7 + 0xd);
      }
      if ((*(ulong *)(param_1 + 0x26) & 0xffffffff) <= uVar11) {
        uVar11 = *(ulong *)(param_1 + 0x26);
      }
      uVar5 = *(ulong *)(param_1 + 0x17e);
      if (uVar11 <= *(ulong *)(param_1 + 0x17e)) {
        uVar5 = uVar11;
      }
      if (param_2 == 0x16) {
        if (uVar5 < 0xc) {
          return -1;
        }
        *(long *)(lVar9 + 0x150) = lVar6;
        *(ulong *)(lVar9 + 0x158) = uVar5 - 0xc;
        puVar1 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28));
        *puVar1 = *(undefined1 *)(lVar9 + 0x138);
        puVar1[1] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 0x10);
        puVar1[2] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 8);
        puVar1[3] = (char)*(undefined8 *)(lVar9 + 0x140);
        puVar1[4] = *(undefined1 *)(lVar9 + 0x149);
        puVar1[5] = *(undefined1 *)(lVar9 + 0x148);
        puVar1[6] = (char)((ulong)*(undefined8 *)(lVar9 + 0x150) >> 0x10);
        puVar1[7] = (char)((ulong)*(undefined8 *)(lVar9 + 0x150) >> 8);
        puVar1[8] = (char)*(undefined8 *)(lVar9 + 0x150);
        puVar1[9] = (char)((ulong)*(undefined8 *)(lVar9 + 0x158) >> 0x10);
        puVar1[10] = (char)((ulong)*(undefined8 *)(lVar9 + 0x158) >> 8);
        puVar1[0xb] = (char)*(undefined8 *)(lVar9 + 0x158);
      }
      iVar3 = FUN_004c9060(param_1,param_2,
                           *(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28),
                           uVar5,&local_68);
      if (iVar3 < 0) {
        if (!bVar2) {
          return -1;
        }
        uVar8 = FUN_004c3380(param_1);
        lVar9 = FUN_00404920(uVar8,0x2b,0,0);
        if (lVar9 < 1) {
          return -1;
        }
        uVar4 = FUN_004c5320(param_1);
        if ((uVar4 >> 0xc & 1) != 0) {
          return -1;
        }
        iVar3 = FUN_004ce190(param_1);
        if (iVar3 == 0) {
          return -1;
        }
        lVar9 = *plVar12;
        bVar2 = false;
      }
      else {
        if (uVar5 != local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: len == written",
                       "external/openssl/ssl/statem/statem_dtls.c",0x10d);
        }
        if (param_2 == 0x16) {
          lVar9 = *(long *)(param_1 + 0x2c);
          if (*(int *)(lVar9 + 0x20c) == 0) {
            puVar1 = (undefined1 *)
                     (*(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28));
            if ((lVar6 == 0) && (*param_1 != 0x100)) {
              *puVar1 = *(undefined1 *)(lVar9 + 0x138);
              puVar1[1] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 0x10);
              puVar1[2] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 8);
              puVar1[3] = (char)*(undefined8 *)(lVar9 + 0x140);
              puVar1[4] = *(undefined1 *)(lVar9 + 0x149);
              puVar1[5] = *(undefined1 *)(lVar9 + 0x148);
              *(undefined2 *)(puVar1 + 6) = 0;
              puVar1[8] = 0;
              puVar1[9] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 0x10);
              puVar1[10] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 8);
              puVar1[0xb] = (char)*(undefined8 *)(lVar9 + 0x140);
              iVar3 = FUN_004e7730(param_1,puVar1,local_68);
              uVar5 = local_68;
            }
            else {
              iVar3 = FUN_004e7730(param_1,puVar1 + 0xc,uVar5 - 0xc);
              uVar5 = local_68;
            }
            if (iVar3 == 0) {
              return -1;
            }
            local_68 = uVar5;
          }
        }
        lVar9 = *plVar12 - uVar5;
        if (lVar9 == 0) {
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            (**(code **)(param_1 + 0x2e))
                      (1,*param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),
                       *(long *)(param_1 + 0x28) + uVar5,param_1,*(undefined8 *)(param_1 + 0x30));
          }
          *plVar12 = 0;
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          return 1;
        }
        *(long *)(param_1 + 0x26) = lVar9;
        *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar5;
        local_68 = uVar5 - 0xc;
        lVar6 = local_68 + lVar6;
        lVar10 = *(long *)(param_1 + 0x2c);
        *(long *)(lVar10 + 0x150) = lVar6;
        *(undefined8 *)(lVar10 + 0x158) = 0;
      }
    } while (lVar9 != 0);
  }
  return 0;
}


