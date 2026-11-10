/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed8a0; name: FUN_002ed8a0
 */


undefined1 * FUN_002ed8a0(double param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined1 uVar9;
  double dVar10;
  undefined *puVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  ulong uVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int local_34;
  
  if (0x7ff0000000000000 < (ulong)ABS(param_1)) {
    *param_2 = 0x6e616e;
    return (undefined1 *)0x3;
  }
  if (param_1 == 0.0) {
    puVar20 = param_2;
    if ((long)param_1 < 0) {
      puVar20 = (undefined4 *)((long)param_2 + 1);
      *(undefined1 *)param_2 = 0x2d;
    }
    *(undefined2 *)puVar20 = 0x30;
    return (undefined1 *)((long)puVar20 + (1 - (long)param_2));
  }
  if (0.0 <= param_1) {
    dVar16 = ABS(param_1);
    puVar20 = param_2;
  }
  else {
    param_1 = -param_1;
    puVar20 = (undefined4 *)((long)param_2 + 1);
    *(undefined1 *)param_2 = 0x2d;
    dVar16 = ABS(param_1);
  }
  if (dVar16 == INFINITY) {
    *puVar20 = 0x666e69;
    return (undefined1 *)((long)puVar20 + (3 - (long)param_2));
  }
  if (999999.5 <= param_1) {
    dVar16 = param_1;
    if (1e+261 <= param_1) {
      dVar16 = param_1 * 1e-256;
    }
    uVar14 = 5;
    if (1e+261 <= param_1) {
      uVar14 = 0x105;
    }
    if (1e+133 <= dVar16) {
      dVar16 = dVar16 * 1e-128;
      uVar14 = uVar14 | 0x80;
    }
    dVar24 = dVar16;
    if (1e+69 <= dVar16) {
      dVar24 = dVar16 * 1e-64;
    }
    if (1e+69 <= dVar16) {
      uVar14 = uVar14 | 0x40;
    }
    if (1e+37 <= dVar24) {
      dVar24 = dVar24 * 1e-32;
      uVar14 = uVar14 | 0x20;
    }
    dVar16 = dVar24;
    if (1e+21 <= dVar24) {
      dVar16 = dVar24 * 1e-16;
    }
    if (1e+21 <= dVar24) {
      uVar14 = uVar14 + 0x10;
    }
    if (10000000000000.0 <= dVar16) {
      dVar16 = dVar16 * 1e-08;
      uVar14 = uVar14 + 8;
    }
    if (1000000000.0 <= dVar16) {
      uVar14 = uVar14 + 4;
      dVar16 = dVar16 * 0.0001;
    }
    if (10000000.0 <= dVar16) {
      dVar16 = dVar16 * 0.01;
      uVar14 = uVar14 + 2;
    }
    if (1000000.0 <= dVar16) {
      uVar14 = uVar14 + 1;
      dVar24 = 0.1;
      goto LAB_002edd30;
    }
  }
  else {
    dVar16 = param_1 * 1e+256;
    if (1e-250 <= param_1) {
      dVar16 = param_1;
    }
    uVar14 = 0xffffff05;
    if (1e-250 <= param_1) {
      uVar14 = 5;
    }
    dVar24 = dVar16 * 1e+128;
    uVar15 = uVar14 - 0x80;
    if (1e-122 <= dVar16) {
      dVar24 = dVar16;
      uVar15 = uVar14;
    }
    dVar16 = dVar24 * 1e+64;
    if (1e-58 <= dVar24) {
      dVar16 = dVar24;
    }
    uVar14 = uVar15 - 0x40;
    if (1e-58 <= dVar24) {
      uVar14 = uVar15;
    }
    dVar24 = dVar16 * 1e+32;
    uVar15 = uVar14 - 0x20;
    if (1e-26 <= dVar16) {
      dVar24 = dVar16;
      uVar15 = uVar14;
    }
    dVar16 = dVar24 * 1e+16;
    if (1e-10 <= dVar24) {
      dVar16 = dVar24;
    }
    uVar14 = uVar15 - 0x10;
    if (1e-10 <= dVar24) {
      uVar14 = uVar15;
    }
    dVar24 = dVar16 * 100000000.0;
    if (0.01 <= dVar16) {
      dVar24 = dVar16;
    }
    uVar15 = uVar14 - 8;
    if (0.01 <= dVar16) {
      uVar15 = uVar14;
    }
    uVar2 = uVar15 - 4;
    dVar10 = dVar24 * 10000.0;
    if (100.0 <= dVar24) {
      uVar2 = uVar15;
      dVar10 = dVar24;
    }
    dVar16 = dVar10 * 100.0;
    uVar14 = uVar2 - 2;
    if (10000.0 <= dVar10) {
      dVar16 = dVar10;
      uVar14 = uVar2;
    }
    if (dVar16 < 100000.0) {
      dVar24 = 10.0;
      uVar14 = uVar14 - 1;
LAB_002edd30:
      dVar16 = dVar16 * dVar24;
    }
  }
  uVar17 = (ulong)(dVar16 * 65536.0);
  if ((uVar17 & 0xffff) - 0x7fff < 2) {
    dVar16 = frexp(param_1,&local_34);
    uVar23 = (long)(dVar16 * -9.223372036854776e+18) << 1;
    local_34 = local_34 + -0x40;
    uVar12 = -(uVar17 >> 0x2e & 1) & 0xffffffff00000000 | (uVar17 >> 0x10 & 0x7fffffff) << 1 | 1;
    uVar15 = (uint)(uVar17 >> 0x10);
    if ((int)uVar14 < 6) {
      uVar12 = uVar12 << (LZCOUNT(uVar12) & 0x3fU);
      auVar26 = FUN_002ee3a0(uVar23,5 - uVar14);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar12;
      if (auVar26._0_8_ <= uVar12) goto LAB_002eddcc;
    }
    else {
      auVar25 = FUN_002ee3a0(uVar12,uVar14 - 5);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar23;
      if (uVar23 <= auVar25._0_8_) {
LAB_002eddcc:
        if ((auVar26._8_8_ <= auVar25._8_8_) || (auVar26._0_8_ < auVar25._0_8_)) {
          uVar2 = uVar15;
          if (auVar26._0_8_ == auVar25._0_8_) {
            uVar2 = (uVar15 & 1) + uVar15;
          }
          if (auVar26._8_8_ == auVar25._8_8_) {
            uVar15 = uVar2;
          }
          goto LAB_002eddfc;
        }
      }
    }
    uVar15 = uVar15 + 1;
  }
  else {
    uVar15 = (uint)(uVar17 + 0x8000 >> 0x10);
  }
LAB_002eddfc:
  puVar11 = PTR_DAT_04373820;
  uVar2 = 100000;
  if (uVar15 != 1000000) {
    uVar2 = uVar15;
  }
  if (uVar15 == 1000000) {
    uVar14 = uVar14 + 1;
  }
  if (99 < (uint)((int)uVar2 / 10000)) {
LAB_002ee13c:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < 100","external/com_google_absl\\absl/strings/numbers.h",0x7b,"PutTwoDigits");
  }
  uVar15 = ((int)uVar2 % 10000) / 100;
  if ((99 < uVar15) || (uVar6 = ((int)uVar2 % 10000) % 100, 99 < uVar6)) goto LAB_002ee13c;
  uVar3 = *(ushort *)(PTR_DAT_04373820 + (long)((int)uVar2 / 10000) * 2);
  uVar4 = *(ushort *)(PTR_DAT_04373820 + (long)(int)uVar15 * 2);
  uVar5 = *(ushort *)(PTR_DAT_04373820 + (long)(int)uVar6 * 2);
  *(undefined2 *)puVar20 = 0x2e30;
  uVar8 = uVar3 >> 8 | (ushort)(((ulong)uVar4 << 0x30) >> 0x28);
  uVar7 = (undefined1)uVar3;
  uVar9 = (undefined1)(uVar4 >> 8);
  switch(uVar14 + 4) {
  case 0:
    *(undefined1 *)((long)puVar20 + 2) = 0x30;
    puVar20 = (undefined4 *)((long)puVar20 + 1);
  case 1:
    *(undefined1 *)((long)puVar20 + 2) = 0x30;
    puVar20 = (undefined4 *)((long)puVar20 + 1);
  case 2:
    goto switchD_002edebc_caseD_2;
  case 3:
    goto switchD_002edebc_caseD_3;
  case 4:
    *(ushort *)((long)puVar20 + 2) = uVar8;
    *(undefined1 *)((long)puVar20 + 1) = 0x2e;
    *(undefined1 *)(puVar20 + 1) = uVar9;
    puVar22 = puVar20 + 2;
    *(undefined1 *)puVar20 = uVar7;
    *(ushort *)((long)puVar20 + 5) = uVar5;
    do {
      cVar13 = *(char *)((long)puVar22 + -2);
      puVar22 = (undefined4 *)((long)puVar22 + -1);
    } while (cVar13 == '0');
    break;
  case 5:
    *(ushort *)((long)puVar20 + 3) = uVar4;
    puVar22 = puVar20 + 2;
    *(undefined1 *)puVar20 = uVar7;
    *(char *)((long)puVar20 + 1) = (char)(uVar3 >> 8);
    *(undefined1 *)((long)puVar20 + 2) = 0x2e;
    *(ushort *)((long)puVar20 + 5) = uVar5;
    do {
      cVar13 = *(char *)((long)puVar22 + -2);
      puVar22 = (undefined4 *)((long)puVar22 + -1);
    } while (cVar13 == '0');
    break;
  case 6:
    *(undefined1 *)puVar20 = uVar7;
    *(undefined1 *)(puVar20 + 1) = uVar9;
    puVar22 = puVar20 + 2;
    *(ushort *)((long)puVar20 + 1) = uVar8;
    *(undefined1 *)((long)puVar20 + 3) = 0x2e;
    *(ushort *)((long)puVar20 + 5) = uVar5;
    do {
      cVar13 = *(char *)((long)puVar22 + -2);
      puVar22 = (undefined4 *)((long)puVar22 + -1);
    } while (cVar13 == '0');
    break;
  case 7:
    *(ushort *)((long)puVar20 + 1) = uVar8;
    *(undefined1 *)((long)puVar20 + 3) = uVar9;
    *(undefined1 *)puVar20 = uVar7;
    if ((ushort)(uVar5 >> 8 | uVar5 & 0xff) == 0x30) {
      puVar19 = puVar20 + 1;
      goto LAB_002ee120;
    }
    *(char *)((long)puVar20 + 5) = (char)uVar5;
    *(undefined1 *)(puVar20 + 1) = 0x2e;
    if (uVar5 >> 8 == 0x30) {
      puVar19 = (undefined4 *)((long)puVar20 + 6);
      goto LAB_002ee120;
    }
    goto LAB_002ee0d8;
  case 8:
    *(ushort *)((long)puVar20 + 1) = uVar8;
    *(undefined1 *)((long)puVar20 + 3) = uVar9;
    *(undefined1 *)puVar20 = uVar7;
    *(char *)(puVar20 + 1) = (char)uVar5;
    if ((uVar5 & 0xff00) == 0x3000) {
      puVar19 = (undefined4 *)((long)puVar20 + 5);
      goto LAB_002ee120;
    }
    *(undefined1 *)((long)puVar20 + 5) = 0x2e;
LAB_002ee0d8:
    puVar19 = (undefined4 *)((long)puVar20 + 7);
    *(char *)((long)puVar20 + 6) = (char)(uVar5 >> 8);
    goto LAB_002ee120;
  case 9:
    *(ushort *)((long)puVar20 + 1) = uVar8;
    *(undefined1 *)puVar20 = uVar7;
    *(undefined1 *)((long)puVar20 + 3) = uVar9;
    *(ushort *)(puVar20 + 1) = uVar5;
    *(undefined1 *)((long)puVar20 + 6) = 0;
    return (undefined1 *)((long)((long)puVar20 + 6) - (long)param_2);
  default:
    if (uVar14 + 4 < 10) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("exp < -4 || exp >= 6","external/com_google_absl/absl/strings/numbers.cc",0x241,
                    "SixDigitsToBuffer");
    }
    *(undefined1 *)puVar20 = uVar7;
    *(undefined1 *)(puVar20 + 1) = uVar9;
    *(ushort *)((long)puVar20 + 2) = uVar8;
    *(ushort *)((long)puVar20 + 5) = uVar5;
    puVar20 = puVar20 + 2;
    do {
      puVar19 = puVar20;
      puVar20 = (undefined4 *)((long)puVar19 + -1);
    } while (*(char *)((long)puVar19 + -2) == '0');
    puVar20 = (undefined4 *)((long)puVar19 + -2);
    if (*(char *)((long)puVar19 + -2) != '.') {
      puVar20 = (undefined4 *)((long)puVar19 + -1);
    }
    puVar18 = (undefined2 *)((long)puVar20 + 2);
    *(undefined1 *)puVar20 = 0x65;
    if ((int)uVar14 < 1) {
      uVar14 = -uVar14;
      *(undefined1 *)((long)puVar20 + 1) = 0x2d;
    }
    else {
      *(undefined1 *)((long)puVar20 + 1) = 0x2b;
    }
    if (99 < (int)uVar14) {
      uVar15 = uVar14 / 100;
      uVar14 = uVar14 % 100;
      puVar18 = (undefined2 *)((long)puVar20 + 3);
      *(char *)((long)puVar20 + 2) = (char)uVar15 + '0';
    }
    if (99 < uVar14) goto LAB_002ee13c;
    puVar19 = (undefined4 *)(puVar18 + 1);
    *puVar18 = *(undefined2 *)(puVar11 + (long)(int)uVar14 * 2);
    goto LAB_002ee120;
  }
  puVar19 = (undefined4 *)((long)puVar22 + -1);
  if (cVar13 != '.') {
    puVar19 = puVar22;
  }
LAB_002ee120:
  *(undefined1 *)puVar19 = 0;
  return (undefined1 *)((long)puVar19 - (long)param_2);
switchD_002edebc_caseD_2:
  *(undefined1 *)((long)puVar20 + 2) = 0x30;
  puVar20 = (undefined4 *)((long)puVar20 + 1);
switchD_002edebc_caseD_3:
  *(ushort *)((long)puVar20 + 3) = uVar8;
  *(undefined1 *)((long)puVar20 + 5) = uVar9;
  puVar21 = (undefined1 *)((long)puVar20 + 9);
  *(undefined1 *)((long)puVar20 + 2) = uVar7;
  *(ushort *)((long)puVar20 + 6) = uVar5;
  do {
    pcVar1 = puVar21 + -2;
    puVar21 = puVar21 + -1;
  } while (*pcVar1 == '0');
  *puVar21 = 0;
  return puVar21 + -(long)param_2;
}


