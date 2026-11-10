/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00390518; name: FUN_00390518
 */


void FUN_00390518(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_90 [48];
  undefined1 auStack_58 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6fb);
                    /* try { // try from 0039055c to 0039056f has its CatchHandler @ 0039071c */
    uVar6 = FUN_0030f3ac(auStack_90,"CHECK failed: (&other) != (this): ");
                    /* try { // try from 00390570 to 00390577 has its CatchHandler @ 00390718 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_90);
  }
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    lVar11 = param_2[2];
    lVar7 = FUN_0032beb0(param_1,iVar1);
    iVar2 = (int)param_1[1];
    iVar12 = *(int *)param_1[2];
    iVar3 = iVar12 - iVar2;
    if (0 < iVar3 && 0 < iVar1) {
      lVar9 = 0;
      do {
        FUN_0031f084(*(undefined8 *)(lVar11 + 8 + lVar9 * 8),*(undefined8 *)(lVar7 + lVar9 * 8));
        lVar9 = lVar9 + 1;
        if (iVar3 <= lVar9) break;
      } while (lVar9 < iVar1);
    }
    puVar5 = PTR_LAB_043730d0;
    puVar4 = PTR_FUN_04373078;
    if (iVar3 < iVar1) {
      lVar10 = *param_1;
      lVar9 = (long)iVar3 * 8;
      if (lVar10 == 0) {
        puVar14 = (undefined8 *)(lVar9 + lVar11);
        iVar12 = (iVar2 + iVar1) - iVar12;
        puVar13 = (undefined8 *)(lVar7 + lVar9);
        do {
          puVar14 = puVar14 + 1;
          uVar6 = *puVar14;
          puVar8 = (undefined8 *)FUN_002e2e80(puVar4,0x18);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          FUN_0031f084(uVar6,puVar8);
          iVar12 = iVar12 + -1;
          *puVar13 = puVar8;
          puVar13 = puVar13 + 1;
        } while (iVar12 != 0);
      }
      else {
        puVar14 = (undefined8 *)(lVar9 + lVar11);
        iVar12 = (iVar2 + iVar1) - iVar12;
        puVar13 = (undefined8 *)(lVar7 + lVar9);
        do {
          puVar14 = puVar14 + 1;
          uVar6 = *puVar14;
          if (*(long *)(lVar10 + 0x70) != 0) {
            FUN_0032cf88(lVar10,0,0x18);
          }
          puVar8 = (undefined8 *)FUN_0032c850(lVar10,0x18,puVar5);
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          FUN_0031f084(uVar6,puVar8);
          iVar12 = iVar12 + -1;
          *puVar13 = puVar8;
          puVar13 = puVar13 + 1;
        } while (iVar12 != 0);
      }
    }
    iVar1 = (int)param_1[1] + iVar1;
    *(int *)(param_1 + 1) = iVar1;
    if (*(int *)param_1[2] < iVar1) {
      *(int *)param_1[2] = iVar1;
    }
  }
  return;
}


