/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d0720; name: FUN_004d0720
 */


undefined8 FUN_004d0720(uint *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  int local_6c;
  ulong local_68;
  
  iVar8 = FUN_004c86b0();
  if (iVar8 == 0) {
    return 0xffffffff;
  }
  do {
    iVar8 = FUN_004c85f0(param_1,*(long *)(param_1 + 0x5ea) + 0x38);
    if (iVar8 != 0) {
      return 1;
    }
    if ((param_1[0x201] == 0xf1) && (0xc < *(ulong *)(param_1 + 0x5d2))) {
      uVar12 = *(ulong *)(param_1 + 0x352);
      if (*(long *)(param_1 + 0x5d2) - 0xdU < uVar12) {
LAB_004d08c8:
        iVar8 = FUN_004c5e40(param_1,uVar12,uVar12,1,1,&local_68);
        if ((0 < iVar8) && (local_68 == uVar12)) goto LAB_004d08f8;
LAB_004d09b8:
        iVar8 = FUN_004c9a20(param_1);
        if (iVar8 != 0) {
          return 0xffffffff;
        }
LAB_004d09c4:
        param_1[0x352] = 0;
        param_1[0x353] = 0;
        param_1[0x35e] = 1;
        goto LAB_004d09cc;
      }
LAB_004d08f8:
      param_1[0x201] = 0xf0;
      lVar10 = FUN_004c88f0(param_1,param_1 + 0x350,&local_6c);
      if (lVar10 != 0) {
        iVar8 = FUN_004d0a10(param_1,lVar10);
        if (iVar8 != 0) {
          if (*(long *)(param_1 + 0x352) == 0) {
            param_1[0x35e] = 1;
            iVar8 = FUN_004c86b0(param_1);
            goto joined_r0x004d098c;
          }
          if (local_6c == 0) {
            iVar8 = FUN_004d0310(param_1,lVar10);
            if (iVar8 != 0) {
              return 1;
            }
            goto LAB_004d09b8;
          }
          iVar8 = FUN_004c9920(param_1);
          if (((iVar8 != 0) || (iVar8 = FUN_004c9a40(param_1), iVar8 != 0)) &&
             (iVar8 = FUN_004c8430(param_1,*(long *)(param_1 + 0x5ea) + 0x28,param_1 + 0x362),
             iVar8 < 0)) {
            return 0xffffffff;
          }
        }
        goto LAB_004d09c4;
      }
      param_1[0x352] = 0;
      param_1[0x353] = 0;
      param_1[0x5d2] = 0;
      param_1[0x5d3] = 0;
      iVar8 = FUN_004c86b0(param_1);
    }
    else {
      uVar9 = FUN_004c5e40(param_1,0xd,*(undefined8 *)(param_1 + 0x20a),0,1,&local_68);
      if ((int)uVar9 < 1) {
        return uVar9;
      }
      if (*(long *)(param_1 + 0x5d2) == 0xd) {
        pbVar11 = *(byte **)(param_1 + 0x5d0);
        param_1[0x201] = 0xf1;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          (**(code **)(param_1 + 0x2e))
                    (0,0,0x100,pbVar11,0xd,param_1,*(undefined8 *)(param_1 + 0x30));
        }
        bVar2 = *pbVar11;
        param_1[0x351] = (uint)bVar2;
        bVar3 = pbVar11[1];
        bVar4 = pbVar11[2];
        *(ulong *)(param_1 + 0x360) = (ulong)CONCAT11(pbVar11[3],pbVar11[4]);
        uVar1 = *(undefined4 *)(pbVar11 + 5);
        *(undefined2 *)((long)param_1 + 0x1796) = *(undefined2 *)(pbVar11 + 9);
        *(undefined4 *)((long)param_1 + 0x1792) = uVar1;
        bVar5 = pbVar11[0xb];
        bVar6 = pbVar11[0xc];
        param_1[0x35e] = 0;
        uVar12 = (ulong)CONCAT11(bVar5,bVar6);
        *(ulong *)(param_1 + 0x352) = uVar12;
        if ((bVar2 == 0x15) || (param_1[0x17a] != 0)) {
          uVar7 = *param_1;
joined_r0x004d0974:
          if ((((uVar7 & 0xff00) == (uint)bVar3 * 0x100) && (uVar12 < 0x4541)) &&
             ((*(long *)(param_1 + 0x142) == 0 ||
              ((uVar7 = *(byte *)(*(long *)(param_1 + 0x142) + 0x280) - 1, 3 < uVar7 ||
               (uVar12 <= (uint)(0x200 << (ulong)(uVar7 & 0x1f)))))))) {
            if (*(long *)(param_1 + 0x5d2) - 0xdU < uVar12) goto LAB_004d08c8;
            goto LAB_004d08f8;
          }
        }
        else {
          uVar7 = (uint)CONCAT11(bVar3,bVar4);
          if (*param_1 == uVar7) goto joined_r0x004d0974;
        }
        goto LAB_004d09c4;
      }
LAB_004d09cc:
      param_1[0x5d2] = 0;
      param_1[0x5d3] = 0;
      iVar8 = FUN_004c86b0(param_1);
    }
joined_r0x004d098c:
    if (iVar8 == 0) {
      return 0xffffffff;
    }
  } while( true );
}


