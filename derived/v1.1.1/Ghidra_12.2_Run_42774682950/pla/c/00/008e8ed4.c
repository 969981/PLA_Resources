/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e8ed4; name: FUN_008e8ed4
 */


ulong FUN_008e8ed4(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      lVar2 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar3 = param_2[3];
      uVar8 = *param_2 + (lVar2 + param_3) * -0x3c5a37a36834ced9;
      lVar9 = *(long *)((long)param_2 + (param_3 - 8)) + uVar3;
      uVar4 = uVar8 + param_2[1];
      uVar6 = uVar4 + param_2[2];
      lVar10 = (uVar4 >> 7 | uVar4 << 0x39) + (uVar8 >> 0x25 | uVar8 * 0x8000000) +
               (uVar8 + uVar3 >> 0x34 | (uVar8 + uVar3) * 0x1000) + (uVar6 >> 0x1f | uVar6 << 0x21);
      uVar4 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar4;
      uVar7 = lVar9 + uVar4;
      uVar1 = uVar8 + lVar2;
      uVar4 = (uVar1 + lVar9 + lVar10) * -0x3c5a37a36834ced9 +
              (uVar6 + uVar3 + (uVar4 >> 0x25 | uVar4 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39) +
               (uVar7 >> 0x34 | uVar7 * 0x1000) + (uVar1 >> 0x1f | uVar1 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar4 = lVar10 + (uVar4 ^ uVar4 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar4 ^ uVar4 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    uVar6 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    lVar9 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar4 = *(long *)((long)param_2 + (param_3 - 0x38)) +
            *(long *)((long)param_2 + (param_3 - 0x10));
    uVar8 = (uVar6 ^ *(long *)((long)param_2 + (param_3 - 0x30)) + param_3) * -0x622015f714c7d297;
    uVar6 = (uVar8 ^ uVar6 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    auVar11 = FUN_008e9338((long)param_2 + (param_3 - 0x40),param_3,uVar6);
    auVar12 = FUN_008e9338((long)param_2 + (param_3 - 0x20),uVar4 + 0xb492b66fbe98f273,lVar9);
    puVar5 = param_2 + 4;
    lVar10 = *param_2 + lVar9 * -0x4b6d499041670d8d;
    lVar9 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar8 = lVar10 + auVar11._0_8_ + uVar4 + puVar5[-3];
      uVar4 = uVar4 + auVar11._8_8_ + puVar5[2];
      uVar8 = (uVar8 >> 0x25 | uVar8 * 0x8000000) * -0x4b6d499041670d8d ^ auVar12._8_8_;
      uVar6 = uVar6 + auVar12._0_8_;
      uVar4 = puVar5[1] + auVar11._0_8_ + (uVar4 >> 0x2a | uVar4 * 0x400000) * -0x4b6d499041670d8d;
      lVar10 = (uVar6 >> 0x21 | uVar6 * 0x80000000) * -0x4b6d499041670d8d;
      auVar11 = FUN_008e9338(puVar5 + -4,auVar11._8_8_ * -0x4b6d499041670d8d,uVar8 + auVar12._0_8_);
      auVar12 = FUN_008e9338(puVar5,lVar10 + auVar12._8_8_,uVar4 + puVar5[-2]);
      puVar5 = puVar5 + 8;
      lVar9 = lVar9 + 0x40;
      uVar6 = uVar8;
    } while (lVar9 != 0);
    uVar6 = SUB168(auVar11 ^ auVar12,0) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ auVar12._0_8_ ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = SUB168(auVar11 ^ auVar12,8) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ auVar12._8_8_ ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = lVar10 + (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = (uVar8 + (uVar4 ^ uVar4 >> 0x2f) * -0x4b6d499041670d8d +
             (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uVar7) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar7 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    return (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  }
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar6 = *(ulong *)((long)param_2 + (param_3 - 8));
      uVar4 = uVar6 + param_3;
      uVar8 = uVar4 << ((ulong)(uint)-(int)param_3 & 0x3f) | uVar4 >> (param_3 & 0x3f);
      uVar4 = (uVar8 ^ *param_2) * -0x622015f714c7d297;
      uVar4 = (uVar4 ^ uVar8 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
      return (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297 ^ uVar6;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return 0x9ae16a3b2f90404f;
      }
      uVar4 = (ulong)((int)param_3 + (uint)*(byte *)((long)param_2 + (param_3 - 1)) * 4) *
              -0x36b62838af619aa9 ^
              (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
              -0x651e95c4d06fbfb1;
      return (uVar4 ^ uVar4 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    uVar6 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    uVar4 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar6) * -0x622015f714c7d297;
    uVar4 = uVar4 ^ uVar6 ^ uVar4 >> 0x2f;
  }
  else {
    uVar6 = *param_2 * -0x4b6d499041670d8d - param_2[1];
    lVar9 = *(long *)((long)param_2 + (param_3 - 8));
    uVar4 = param_2[1] ^ 0xc949d7c7509e6557;
    uVar4 = *param_2 * -0x4b6d499041670d8d + param_3 + lVar9 * 0x651e95c4d06fbfb1 +
            (uVar4 >> 0x14 | uVar4 << 0x2c);
    uVar6 = ((uVar6 >> 0x2b | uVar6 * 0x200000) +
             *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 +
             (lVar9 * -0x41befec400000000 | (ulong)(lVar9 * -0x651e95c4d06fbfb1) >> 0x1e) ^ uVar4) *
            -0x622015f714c7d297;
    uVar4 = uVar6 ^ uVar4 ^ uVar6 >> 0x2f;
  }
  return (uVar4 * -0x622015f714c7d297 ^ uVar4 * -0x622015f714c7d297 >> 0x2f) * -0x622015f714c7d297;
}


