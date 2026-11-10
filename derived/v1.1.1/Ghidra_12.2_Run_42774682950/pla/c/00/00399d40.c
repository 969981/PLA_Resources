/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399d40; name: FUN_00399d40
 */


uint FUN_00399d40(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *__s2;
  byte *__s1;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if ((uint)param_1[3] != (uint)param_2[3]) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x97);
                    /* try { // try from 00399d80 to 00399d93 has its CatchHandler @ 00399efc */
    uVar8 = FUN_0030f3ac(auStack_60,"Unsupported: type mismatch");
                    /* try { // try from 00399d94 to 00399d9b has its CatchHandler @ 00399ef8 */
    FUN_0030f41c(auStack_28,uVar8);
    FUN_0030f658(auStack_60);
  }
  uVar6 = FUN_0031aab8(param_1);
  switch(uVar6) {
  case 1:
    uVar7 = (uint)((int)(uint)*param_1 < (int)(uint)*param_2);
    break;
  case 2:
    uVar7 = (uint)((long)*param_1 < (long)*param_2);
    break;
  case 3:
    uVar7 = (uint)*param_1;
    uVar9 = (uint)*param_2;
    goto LAB_00399ed4;
  case 4:
    bVar5 = *param_2 <= *param_1;
    goto LAB_00399ed8;
  case 5:
  case 6:
  case 8:
  case 10:
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x9e);
                    /* try { // try from 00399de8 to 00399dfb has its CatchHandler @ 00399ef4 */
    uVar8 = FUN_0030f3ac(auStack_60,"Unsupported");
                    /* try { // try from 00399dfc to 00399e03 has its CatchHandler @ 00399ef0 */
    FUN_0030f41c(auStack_28,uVar8);
    FUN_0030f658(auStack_60);
    uVar7 = 0;
    break;
  case 7:
    uVar7 = (uint)(byte)*param_1;
    uVar9 = (uint)(byte)*param_2;
LAB_00399ed4:
    bVar5 = uVar9 <= uVar7;
LAB_00399ed8:
    uVar7 = (uint)!bVar5;
    break;
  case 9:
    bVar3 = (byte)*param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = param_2[1];
    }
    bVar4 = (byte)*param_1;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_1[1];
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n == 0) {
LAB_00399eac:
      uVar7 = 0;
      if (uVar2 < uVar1) {
        uVar7 = 0xffffffff;
      }
    }
    else {
      __s1 = (byte *)param_1[2];
      if ((bVar4 & 1) == 0) {
        __s1 = (byte *)((long)param_1 + 1);
      }
      __s2 = (byte *)param_2[2];
      if ((bVar3 & 1) == 0) {
        __s2 = (byte *)((long)param_2 + 1);
      }
      uVar7 = memcmp(__s1,__s2,__n);
      if (uVar7 == 0) goto LAB_00399eac;
    }
    uVar7 = uVar7 >> 0x1f;
    break;
  default:
    uVar7 = 0;
  }
  return uVar7;
}


