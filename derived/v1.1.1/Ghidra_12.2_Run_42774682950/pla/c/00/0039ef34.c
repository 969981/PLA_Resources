/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039ef34; name: FUN_0039ef34
 */


byte * FUN_0039ef34(long *param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  byte *local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_58 [8];
  
  if ((char)*param_2 < '\0') {
    local_98 = param_2;
    auVar10 = FUN_003232c0(param_2,*param_2);
    local_98 = auVar10._0_8_;
    if (local_98 == (byte *)0x0) {
      return (byte *)0x0;
    }
    iVar3 = FUN_0031e1b4(param_1,local_98,auVar10._8_8_);
  }
  else {
    local_98 = param_2 + 1;
    iVar3 = FUN_0031e1b4(param_1,local_98);
  }
  if (-1 < iVar3) {
    uVar4 = FUN_0030c7bc(param_1,&local_98,0xffffffff);
    if ((uVar4 & 1) == 0) {
      uVar4 = (ulong)*local_98;
      if (-1 < (char)*local_98) goto LAB_0039f028;
LAB_0039f030:
      uVar4 = (ulong)(((int)uVar4 + (uint)local_98[1] * 0x80) - 0x80);
      if (-1 < (char)local_98[1]) {
        lVar8 = 2;
        goto LAB_0039f044;
      }
      auVar10 = FUN_003230f0(local_98,uVar4);
      uVar4 = auVar10._8_8_;
      local_98 = auVar10._0_8_;
      if (local_98 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar5 = (*(code *)param_3[1])(param_3[2],uVar4 & 0xffffffff);
      if ((uVar5 & 1) != 0) goto LAB_0039f05c;
      do {
        uVar2 = *(undefined4 *)(param_3 + 4);
        if ((*(ulong *)param_3[3] & 1) == 0) {
          lVar8 = FUN_0030c8c0();
        }
        else {
          lVar8 = (*(ulong *)param_3[3] & 0xfffffffffffffffe) + 8;
        }
        FUN_0030d5b0(lVar8,uVar2,uVar4);
        while( true ) {
          uVar4 = FUN_0030c7bc(param_1,&local_98,0xffffffff);
          if ((uVar4 & 1) != 0) goto LAB_0039f10c;
          uVar4 = (ulong)*local_98;
          if ((char)*local_98 < '\0') goto LAB_0039f030;
LAB_0039f028:
          lVar8 = 1;
LAB_0039f044:
          local_98 = local_98 + lVar8;
          uVar5 = (*(code *)param_3[1])(param_3[2],uVar4);
          if ((uVar5 & 1) == 0) break;
LAB_0039f05c:
          puVar9 = (uint *)*param_3;
          uVar1 = *puVar9;
          uVar7 = puVar9[1];
          if (uVar1 == uVar7) {
            FUN_003265e4(puVar9,uVar1 + 1);
            uVar7 = puVar9[1];
          }
          if ((int)uVar7 < 1) {
            FUN_0030f640(auStack_90,3,
                         "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                         ,0x161);
                    /* try { // try from 0039f0e0 to 0039f0ef has its CatchHandler @ 0039f160 */
            uVar6 = FUN_0030f3ac(auStack_90,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0039f0f0 to 0039f0f7 has its CatchHandler @ 0039f15c */
            FUN_0030f41c(auStack_58,uVar6);
            FUN_0030f658(auStack_90);
          }
          *(int *)(*(long *)(puVar9 + 2) + (ulong)uVar1 * 4) = (int)uVar4;
          *puVar9 = uVar1 + 1;
        }
      } while( true );
    }
LAB_0039f10c:
    if ((int)param_1[10] == 0) {
      uVar1 = *(int *)((long)param_1 + 0x1c) + iVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      return local_98;
    }
  }
  return (byte *)0x0;
}


