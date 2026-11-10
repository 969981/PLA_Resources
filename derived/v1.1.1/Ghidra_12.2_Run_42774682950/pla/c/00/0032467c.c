/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032467c; name: FUN_0032467c
 */


byte * FUN_0032467c(long *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 local_98;
  byte *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [48];
  
  local_90 = param_2 + 1;
  if ((char)*param_2 < '\0') {
    if ((char)*local_90 < '\0') {
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (0x7fffffef <
              (uint)*param_2 + (uint)*local_90 * 0x80 + (uint)param_2[2] * 0x4000 +
              (uint)param_2[3] * 0x200000 + (uint)param_2[4] * 0x10000000 + 0xefdfbf80)) {
            return (byte *)0x0;
          }
          local_90 = param_2 + 5;
          goto LAB_003246d0;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    local_90 = param_2 + lVar7 + 1;
  }
LAB_003246d0:
  iVar3 = FUN_0031e1b4(param_1,local_90);
  if (-1 < iVar3) {
    uVar4 = FUN_0030c7bc(param_1,&local_90,0xffffffff);
    while ((uVar4 & 1) == 0) {
      local_90 = (byte *)FUN_00323ec0(local_90,&local_98);
      uVar2 = local_98;
      if (local_90 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar1 = *param_3;
      uVar6 = param_3[1];
      if (uVar1 == uVar6) {
        FUN_00328e64(param_3,uVar1 + 1);
        uVar6 = param_3[1];
      }
      if ((int)uVar6 < 1) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x161);
                    /* try { // try from 00324790 to 0032479f has its CatchHandler @ 00324878 */
        uVar5 = FUN_0030f3ac(auStack_80,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003247a0 to 003247a7 has its CatchHandler @ 00324874 */
        FUN_0030f41c(auStack_88,uVar5);
        FUN_0030f658(auStack_80);
      }
      *(undefined8 *)(*(long *)(param_3 + 2) + (ulong)uVar1 * 8) = uVar2;
      *param_3 = uVar1 + 1;
      uVar4 = FUN_0030c7bc(param_1,&local_90,0xffffffff);
    }
    if ((int)param_1[10] == 0) {
      uVar1 = *(int *)((long)param_1 + 0x1c) + iVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      return local_90;
    }
  }
  return (byte *)0x0;
}


