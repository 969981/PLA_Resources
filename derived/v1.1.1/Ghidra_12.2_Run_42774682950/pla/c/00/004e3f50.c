/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3f50; name: FUN_004e3f50
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_004e3f50(int *param_1,undefined8 *param_2,uint param_3,long *param_4,long *param_5,int param_6)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  bool bVar15;
  uint uVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  long local_68;
  
  puVar18 = (undefined1 *)*param_2;
  uVar20 = param_2[1];
  lVar19 = *(long *)(param_1 + 0x122);
  *param_4 = 0;
  if ((param_3 >> 7 & 1) != 0) {
    FUN_004e3330(*(long *)(param_1 + 0x122) + 0x1e8);
  }
  lVar1 = *(long *)(lVar19 + 0x1f0) + 0x1a;
  lVar8 = FUN_004002a0(lVar1 * 0x28,"external/openssl/ssl/statem/extensions.c",0x23d);
  if (lVar8 == 0) {
    FUN_004c99a0(param_1,0x50,0x1b3,0x41,"external/openssl/ssl/statem/extensions.c",0x240);
    return 0;
  }
  uVar5 = (param_3 >> 7 ^ 0xffffffff) & 2;
  bVar6 = (param_3 & 0x80) != 0;
  lVar9 = 0;
  if (bVar6) {
    uVar5 = 1;
  }
joined_r0x004e405c:
  lVar17 = lVar9;
  if (uVar20 != 0) {
    do {
      if ((uVar20 == 1) || ((uVar20 & 0xfffffffffffffffe) == 2)) {
LAB_004e4680:
        uVar10 = 0x32;
        uVar11 = 0x6e;
        uVar12 = 0x24d;
        goto LAB_004e4698;
      }
      uVar4 = (ulong)CONCAT11(puVar18[2],puVar18[3]);
      uVar13 = uVar20 - 4;
      uVar20 = uVar13 - uVar4;
      if (uVar13 < uVar4) goto LAB_004e4680;
      uVar3 = (uint)CONCAT11(*puVar18,puVar18[1]);
      if (0x3373 < uVar3) {
        if (uVar3 == 0x3374) {
          lVar9 = 8;
          uVar16 = DAT_0418329c;
        }
        else if (uVar3 == 65000) {
          lVar9 = 0x15;
          uVar16 = DAT_04183574;
        }
        else {
          if (uVar3 != 0xff01) goto switchD_004e40c8_caseD_2;
          lVar9 = 0;
          uVar16 = DAT_041830dc;
        }
        goto joined_r0x004e43fc;
      }
      switch(uVar3) {
      case 0:
        lVar9 = 1;
        uVar16 = DAT_04183114;
        goto joined_r0x004e41ec;
      case 1:
        lVar9 = 2;
        uVar16 = DAT_0418314c;
        goto joined_r0x004e41ec;
      default:
switchD_004e40c8_caseD_2:
        local_68 = 0;
        lVar9 = FUN_004e32a0(lVar19 + 0x1e8,uVar5,uVar3,&local_68);
        if (lVar9 == 0) {
          plVar14 = (long *)0x0;
          bVar15 = true;
          goto joined_r0x004e4628;
        }
        uVar16 = *(uint *)(lVar9 + 8);
        if ((uVar16 & param_3) != 0) {
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            uVar16 = uVar16 >> 1;
          }
          if ((uVar16 & 1) != 0) goto LAB_004e4664;
          lVar9 = local_68 + 0x1a;
          goto LAB_004e40fc;
        }
        goto LAB_004e4664;
      case 5:
        lVar9 = 7;
        uVar16 = DAT_04183264;
joined_r0x004e41ec:
        if ((uVar16 & param_3) != 0) goto LAB_004e40e0;
        goto LAB_004e4664;
      case 10:
        lVar9 = 5;
        uVar16 = DAT_041831f4;
        break;
      case 0xb:
        lVar9 = 4;
        uVar16 = DAT_041831bc;
        break;
      case 0xc:
        lVar9 = 3;
        uVar16 = DAT_04183184;
        break;
      case 0xd:
        lVar9 = 0x10;
        uVar16 = DAT_0418345c;
        break;
      case 0xe:
        lVar9 = 10;
        uVar16 = DAT_0418330c;
        break;
      case 0x10:
        lVar9 = 9;
        uVar16 = DAT_041832d4;
        break;
      case 0x15:
        lVar9 = 0x18;
        uVar16 = DAT_0418361c;
        break;
      case 0x16:
        lVar9 = 0xb;
        uVar16 = DAT_04183344;
        break;
      case 0x17:
        lVar9 = 0xd;
        uVar16 = DAT_041833b4;
        break;
      case 0x23:
        lVar9 = 6;
        uVar16 = DAT_0418322c;
        break;
      case 0x29:
        lVar9 = 0x19;
        uVar16 = DAT_04183654;
        break;
      case 0x2a:
        lVar9 = 0x16;
        uVar16 = DAT_041835ac;
        break;
      case 0x2b:
        lVar9 = 0x11;
        uVar16 = DAT_04183494;
        break;
      case 0x2c:
        lVar9 = 0x14;
        uVar16 = DAT_0418353c;
        break;
      case 0x2d:
        lVar9 = 0x12;
        uVar16 = DAT_041834cc;
        break;
      case 0x2f:
        lVar9 = 0x17;
        uVar16 = DAT_041835e4;
        break;
      case 0x31:
        lVar9 = 0xf;
        uVar16 = DAT_04183424;
        break;
      case 0x32:
        lVar9 = 0xe;
        uVar16 = DAT_041833ec;
        break;
      case 0x33:
        lVar9 = 0x13;
        uVar16 = DAT_04183504;
      }
joined_r0x004e43fc:
      if ((uVar16 & param_3) == 0) {
LAB_004e4664:
        uVar10 = 0x2f;
        uVar11 = 0x6e;
        uVar12 = 0x25b;
LAB_004e4698:
        FUN_004c99a0(param_1,uVar10,0x1b3,uVar11,"external/openssl/ssl/statem/extensions.c",uVar12);
        goto LAB_004e46a0;
      }
LAB_004e40e0:
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0) {
        if ((uVar16 & 1) == 0) goto LAB_004e40fc;
        goto LAB_004e4664;
      }
      if ((uVar16 >> 1 & 1) != 0) goto LAB_004e4664;
LAB_004e40fc:
      plVar14 = (long *)(lVar8 + lVar9 * 0x28);
      if ((int)plVar14[2] == 1) goto LAB_004e4664;
      bVar15 = false;
joined_r0x004e4628:
      if ((uVar3 == 0x29 && bVar6) && (uVar20 != 0)) goto LAB_004e4664;
      if ((((param_3 & 0x6080) == 0) &&
          (((uVar13 = (ulong)(uint)((int)((ulong)((long)plVar14 - lVar8) >> 3) * -0x33333333),
            uVar13 < 0x1a && (uVar3 != 0x12)) && (uVar3 != 0x2c)))) &&
         (((uVar3 != 0xff01 && ((*(byte *)((long)param_1 + uVar13 + 0x608) >> 1 & 1) == 0)) &&
          (((uint)(uVar3 == 65000) & param_3 >> 8) == 0)))) {
        uVar10 = 0x6e;
        uVar11 = 0xd9;
        uVar12 = 0x27b;
        goto LAB_004e4698;
      }
      puVar2 = puVar18 + 4;
      puVar18 = puVar2 + uVar4;
      lVar9 = lVar17;
      if (bVar15) goto joined_r0x004e405c;
      *plVar14 = (long)puVar2;
      plVar14[1] = uVar4;
      *(undefined4 *)(plVar14 + 2) = 1;
      lVar9 = lVar17 + 1;
      *(uint *)(plVar14 + 3) = uVar3;
      plVar14[4] = lVar17;
      if (*(code **)(param_1 + 0x18a) == (code *)0x0) goto joined_r0x004e405c;
      (**(code **)(param_1 + 0x18a))
                (param_1,param_1[0xe] == 0,uVar3,puVar2,uVar4,*(undefined8 *)(param_1 + 0x18c));
      lVar17 = lVar9;
      if (uVar20 == 0) break;
    } while( true );
  }
  if (param_6 != 0) {
    lVar19 = 0;
    if ((param_3 >> 0xb & 1) == 0) {
      do {
        if ((*(code **)((long)&DAT_041830e0 + lVar19) != (code *)0x0) &&
           (uVar5 = *(uint *)((long)&DAT_041830dc + lVar19), (uVar5 & param_3) != 0)) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) {
            iVar7 = **(int **)(param_1 + 2);
            bVar6 = 0x303 < iVar7 && iVar7 != 0x10000;
          }
          else {
            if ((uVar5 >> 2 & 1) != 0) goto LAB_004e46f8;
            bVar6 = false;
          }
          if ((((((uVar5 >> 3 & 1) != 0) || (*param_1 != 0x300)) &&
               (((uVar5 >> 4 & 1) == 0 || (!bVar6)))) &&
              (((((param_3 >> 7 & 1) != 0 || ((uVar5 >> 5 & 1) == 0)) || (bVar6)) &&
               ((((uVar5 >> 5 & 1) == 0 || (bVar6)) || (param_1[0xe] == 0)))))) &&
             ((((uVar5 >> 6 ^ 0xffffffff) & 1) != 0 || param_1[0x32] == 0 &&
              (iVar7 = (**(code **)((long)&DAT_041830e0 + lVar19))(param_1,param_3), iVar7 == 0))))
          goto LAB_004e46a0;
        }
LAB_004e46f8:
        lVar19 = lVar19 + 0x38;
      } while (lVar19 != 0x5b0);
    }
    else {
      do {
        if (((*(code **)((long)&DAT_041830e0 + lVar19) != (code *)0x0) &&
            (uVar5 = *(uint *)((long)&DAT_041830dc + lVar19), (uVar5 & param_3) != 0)) &&
           ((((uVar5 >> 2 & 1) == 0 ||
             ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0)) &&
            ((((*param_1 != 0x300 || (uVar5 & 8) != 0 && ((uVar5 >> 4 & 1) == 0)) &&
              (((uVar5 >> 6 ^ 0xffffffff) & 1) != 0 || param_1[0x32] == 0)) &&
             (iVar7 = (**(code **)((long)&DAT_041830e0 + lVar19))(param_1,param_3), iVar7 == 0))))))
        {
LAB_004e46a0:
          FUN_00400420(lVar8,"external/openssl/ssl/statem/extensions.c",0x2a1);
          return 0;
        }
        lVar19 = lVar19 + 0x38;
      } while (lVar19 != 0x5b0);
    }
  }
  *param_4 = lVar8;
  if (param_5 != (long *)0x0) {
    *param_5 = lVar1;
  }
  return 1;
}


