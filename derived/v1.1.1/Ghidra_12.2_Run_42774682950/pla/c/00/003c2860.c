/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c2860; name: FUN_003c2860
 */


void FUN_003c2860(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_90 [48];
  undefined1 auStack_58 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6fb);
                    /* try { // try from 003c28a4 to 003c28b7 has its CatchHandler @ 003c29c0 */
    uVar4 = FUN_0030f3ac(auStack_90,"CHECK failed: (&other) != (this): ");
                    /* try { // try from 003c28b8 to 003c28bf has its CatchHandler @ 003c29bc */
    FUN_0030f41c(auStack_58,uVar4);
    FUN_0030f658(auStack_90);
  }
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != 0) {
    lVar8 = param_2[2];
    lVar5 = FUN_0032beb0(param_1,iVar2);
    iVar1 = *(int *)(param_1 + 1);
    iVar10 = *(int *)param_1[2];
    uVar3 = iVar10 - iVar1;
    if (0 < (int)uVar3 && 0 < iVar2) {
      lVar12 = 0;
      do {
        FUN_003c29d4(*(undefined8 *)(lVar8 + 8 + lVar12 * 8),*(undefined8 *)(lVar5 + lVar12 * 8));
        lVar12 = lVar12 + 1;
        if ((int)uVar3 <= lVar12) break;
      } while (lVar12 < iVar2);
    }
    if ((int)uVar3 < iVar2) {
      uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      uVar4 = *param_1;
      puVar13 = (undefined8 *)(uVar7 + lVar8);
      iVar10 = (iVar1 + iVar2) - iVar10;
      puVar11 = (undefined8 *)(lVar5 + uVar7);
      do {
        puVar13 = puVar13 + 1;
        uVar9 = *puVar13;
        uVar6 = FUN_003c0248(uVar4);
        FUN_003c29d4(uVar9,uVar6);
        iVar10 = iVar10 + -1;
        *puVar11 = uVar6;
        puVar11 = puVar11 + 1;
      } while (iVar10 != 0);
    }
    iVar2 = *(int *)(param_1 + 1) + iVar2;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)param_1[2] < iVar2) {
      *(int *)param_1[2] = iVar2;
    }
  }
  return;
}


