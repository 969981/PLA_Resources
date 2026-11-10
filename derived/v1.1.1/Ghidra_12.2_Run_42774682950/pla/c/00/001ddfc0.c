/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ddfc0; name: FUN_001ddfc0
 */


int FUN_001ddfc0(long *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [48];
  undefined1 local_80 [16];
  int local_6c [3];
  
  lVar9 = *param_1;
  local_6c[0] = 0;
  *param_3 = 0;
  if (*(char *)((long)param_1 + (long)param_2 + 0x3fa) == '\0') {
    local_80 = FUN_001f8fb4();
    uVar2 = FUN_001ddbec(lVar9,local_80,1);
    if ((int)uVar2 < 0) {
      FUN_001f3ae0(lVar9,"Connection time-out");
      iVar5 = 0x1c;
    }
    else {
      uVar10 = 0;
      iVar5 = 0;
      lVar11 = 0x78;
      do {
        iVar4 = *(int *)((long)param_1 + uVar10 * 4 + 0x260);
        if (iVar4 != -1) {
          uVar1 = (uint)uVar10 ^ 1;
          uVar3 = FUN_001f3550(0xffffffff,0xffffffff,iVar4,0);
          if (uVar3 == 2) {
LAB_001de134:
            uVar6 = FUN_001de414(*(undefined4 *)((long)param_1 + uVar10 * 4 + 0x260),local_6c);
            if ((uVar6 & 1) != 0) {
              *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600) =
                   *(undefined4 *)((long)param_1 + uVar10 * 4 + 0x260);
              param_1[0xe] = *(long *)((long)param_1 + lVar11);
              *(undefined4 *)((long)param_1 + uVar10 * 4 + 0x260) = 0xffffffff;
              if (*(int *)((long)param_1 + (ulong)uVar1 * 4 + 0x260) != -1) {
                FUN_001de484(param_1);
                *(undefined4 *)((long)param_1 + (ulong)uVar1 * 4 + 0x260) = 0xffffffff;
              }
              iVar5 = FUN_001fd1ec(param_1,param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              *(undefined1 *)((long)param_1 + (long)param_2 + 0x3fa) = 1;
              *param_3 = 1;
              if (param_2 == 0) {
                FUN_001f2dcc(lVar9,4);
              }
              FUN_001ddd44(param_1,*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600));
              FUN_001fd2e4(param_1);
              return 0;
            }
            FUN_001f3934(lVar9,"Connection failed\n");
          }
          else if (uVar3 == 0) {
            local_6c[0] = 0;
            iVar4 = FUN_001f8fe0(local_80._0_8_,local_80._8_8_,param_1[0x80],param_1[0x81]);
            if (param_1[0x83] <= (long)iVar4) {
              FUN_001f3934(lVar9,"After %ldms connect time, move on!\n");
              local_6c[0] = 0x6e;
            }
            if ((uVar10 == 0) && (param_1[0x10] == 0)) {
              iVar4 = FUN_001f8fe0(local_80._0_8_,local_80._8_8_,param_1[0x80],param_1[0x81]);
              if (*(long *)(lVar9 + 0x7c0) <= (long)iVar4) {
                FUN_001de334(param_1,param_2,1);
              }
            }
          }
          else {
            if ((*(byte *)((long)param_1 + 0x3ff) >> 3 & 1) != 0) goto LAB_001de134;
            if ((uVar3 >> 2 & 1) != 0) {
              FUN_001de414(*(undefined4 *)((long)param_1 + uVar10 * 4 + 0x260),local_6c);
            }
          }
          if (local_6c[0] != 0) {
            *(int *)(lVar9 + 0x11c0) = local_6c[0];
            nnsocketSetLastErrno();
            if (*(long *)((long)param_1 + lVar11) != 0) {
              FUN_001e1190(*(long *)((long)param_1 + lVar11),auStack_b0,0x2e);
              lVar12 = param_1[0x32];
              uVar7 = FUN_001f8d80(local_6c[0],auStack_130,0x80);
              FUN_001f3934(lVar9,"connect to %s port %ld failed: %s\n",auStack_b0,lVar12,uVar7);
              param_1[0x83] =
                   (long)(int)(uVar2 >> (*(long *)(*(long *)((long)param_1 + lVar11) + 0x28) != 0));
              iVar4 = FUN_001de334(param_1,param_2,uVar10 & 0xffffffff);
              if ((iVar4 != 7) || (*(int *)((long)param_1 + (ulong)uVar1 * 4 + 0x260) == -1)) {
                iVar5 = iVar4;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (uVar10 != 2);
      if (iVar5 != 0) {
        if (param_1[0x10] == 0) {
          iVar5 = FUN_001de334(param_1,param_2,1);
          if (iVar5 == 0) {
            return 0;
          }
        }
        uVar2 = *(uint *)((long)param_1 + 0x3fc);
        if ((uVar2 >> 6 & 1) == 0) {
          if ((uVar2 >> 5 & 1) == 0) {
            if ((uVar2 >> 2 & 1) == 0) {
              plVar8 = param_1 + 0x1a;
            }
            else {
              plVar8 = param_1 + 0x20;
            }
          }
          else {
            plVar8 = param_1 + 0x2c;
          }
        }
        else {
          plVar8 = param_1 + 0x24;
        }
        lVar12 = *plVar8;
        lVar11 = param_1[0x32];
        uVar7 = FUN_001f8d80(local_6c[0],auStack_130,0x80);
        FUN_001f3ae0(lVar9,"Failed to connect to %s port %ld: %s",lVar12,lVar11,uVar7);
      }
    }
  }
  else {
    iVar5 = 0;
    *param_3 = 1;
  }
  return iVar5;
}


