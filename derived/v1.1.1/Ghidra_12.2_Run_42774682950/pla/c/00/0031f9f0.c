/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031f9f0; name: FUN_0031f9f0
 */


/* WARNING: Removing unreachable block (ram,0x0031fa8c) */
/* WARNING: Removing unreachable block (ram,0x0031fa94) */

int FUN_0031f9f0(byte *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_3 != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                 ,0x142);
                    /* try { // try from 0031fa20 to 0031fa3f has its CatchHandler @ 0031fd38 */
    uVar5 = FUN_0030f3ac(auStack_50,"CHECK failed: errors == nullptr: ");
    uVar5 = FUN_0030f3ac(uVar5,"Error reporting not implemented.");
                    /* try { // try from 0031fa40 to 0031fa47 has its CatchHandler @ 0031fd34 */
    FUN_0030f41c(auStack_18,uVar5);
    FUN_0030f658(auStack_50);
  }
  if (param_1 == param_2) {
    while( true ) {
      bVar3 = *param_1;
      pbVar9 = param_1;
      if ((bVar3 == 0) || (bVar3 == 0x5c)) break;
      param_1 = param_1 + 1;
    }
  }
  else {
    bVar3 = *param_1;
    pbVar9 = param_2;
  }
  if (bVar3 == 0) {
switchD_0031fb20_caseD_0:
    *pbVar9 = 0;
    return (int)pbVar9 - (int)param_2;
  }
  pbVar4 = pbVar9;
joined_r0x0031fae4:
  do {
    pbVar6 = param_1 + 1;
    if (bVar3 != 0x5c) {
      pbVar9 = pbVar4 + 1;
      *pbVar4 = bVar3;
      bVar3 = *pbVar6;
      param_1 = pbVar6;
      goto joined_r0x0031fcb8;
    }
    pbVar9 = pbVar4;
    switch(*pbVar6) {
    case 0:
      goto switchD_0031fb20_caseD_0;
    default:
      goto switchD_0031fb20_caseD_1;
    case 0x22:
      goto switchD_0031fb20_caseD_22;
    case 0x27:
      *pbVar4 = 0x27;
      bVar3 = param_1[2];
      break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
      bVar2 = *pbVar6 - 0x30;
      pbVar6 = param_1 + 2;
      bVar3 = (*pbVar6 + bVar2 * '\b') - 0x30;
      if ((*pbVar6 & 0xf8) != 0x30) {
        pbVar6 = param_1 + 1;
        bVar3 = bVar2;
      }
      bVar2 = pbVar6[1];
      if ((bVar2 & 0xf8) == 0x30) {
        bVar3 = (bVar2 + bVar3 * '\b') - 0x30;
        pbVar6 = pbVar6 + 1;
      }
      pbVar9 = pbVar4 + 1;
      *pbVar4 = bVar3;
      goto switchD_0031fb20_caseD_1;
    case 0x3f:
      *pbVar4 = 0x3f;
      bVar3 = param_1[2];
      break;
    case 0x58:
    case 0x78:
      if ((param_1[2] - 0x30 < 10) ||
         ((uVar7 = param_1[2] - 0x41, uVar7 < 0x26 &&
          ((1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) != 0)))) {
        uVar7 = 0;
        param_1 = param_1 + 2;
        uVar8 = (uint)*param_1;
        if (9 < *param_1 - 0x30) goto LAB_0031fbe8;
        do {
          do {
            pbVar6 = param_1;
            uVar1 = uVar8 + 9;
            if (uVar8 < 0x3a) {
              uVar1 = uVar8;
            }
            uVar7 = uVar1 & 0xf | uVar7 << 4;
            param_1 = pbVar6 + 1;
            uVar8 = (uint)*param_1;
          } while (uVar8 - 0x30 < 10);
LAB_0031fbe8:
        } while ((uVar8 - 0x41 < 0x26) &&
                ((1L << ((ulong)(uVar8 - 0x41) & 0x3f) & 0x3f0000003fU) != 0));
        *pbVar4 = (byte)uVar7;
        param_1 = pbVar6 + 1;
        bVar3 = *param_1;
        goto joined_r0x0031fcb8;
      }
switchD_0031fb20_caseD_1:
      param_1 = pbVar6 + 1;
      bVar3 = *param_1;
      goto joined_r0x0031fcb8;
    case 0x5c:
      *pbVar4 = 0x5c;
      bVar3 = param_1[2];
      break;
    case 0x61:
      *pbVar4 = 7;
      bVar3 = param_1[2];
      break;
    case 0x62:
      *pbVar4 = 8;
      bVar3 = param_1[2];
      goto joined_r0x0031fcb8;
    case 0x66:
      *pbVar4 = 0xc;
      bVar3 = param_1[2];
joined_r0x0031fcb8:
      param_1 = param_1 + 2;
      goto joined_r0x0031fcb8;
    case 0x6e:
      *pbVar4 = 10;
      bVar3 = param_1[2];
      goto joined_r0x0031fce8;
    case 0x72:
      *pbVar4 = 0xd;
      bVar3 = param_1[2];
joined_r0x0031fce8:
      param_1 = param_1 + 2;
      pbVar9 = pbVar4 + 1;
      goto joined_r0x0031fcb8;
    case 0x74:
      *pbVar4 = 9;
      param_1 = param_1 + 2;
      bVar3 = *param_1;
      goto joined_r0x0031fcb8;
    case 0x76:
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 0xb;
      param_1 = param_1 + 2;
      bVar3 = *param_1;
      goto joined_r0x0031fcb8;
    }
    param_1 = param_1 + 2;
joined_r0x0031fcb8:
    pbVar9 = pbVar4 + 1;
joined_r0x0031fcb8:
    pbVar4 = pbVar9;
  } while (bVar3 != 0);
  goto switchD_0031fb20_caseD_0;
switchD_0031fb20_caseD_22:
  pbVar9 = pbVar4 + 1;
  *pbVar4 = 0x22;
  param_1 = param_1 + 2;
  bVar3 = *param_1;
  pbVar4 = pbVar9;
  if (bVar3 == 0) goto switchD_0031fb20_caseD_0;
  goto joined_r0x0031fae4;
}


