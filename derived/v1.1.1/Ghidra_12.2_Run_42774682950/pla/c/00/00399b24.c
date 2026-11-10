/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399b24; name: FUN_00399b24
 */


bool FUN_00399b24(uint *param_1,uint *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *__s1;
  byte *__s2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_1[6] != param_2[6]) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0xb3);
                    /* try { // try from 00399b60 to 00399b73 has its CatchHandler @ 00399d2c */
    uVar6 = FUN_0030f3ac(auStack_50,"Unsupported: type mismatch");
                    /* try { // try from 00399b74 to 00399b7b has its CatchHandler @ 00399d28 */
    FUN_0030f41c(auStack_18,uVar6);
    FUN_0030f658(auStack_50);
  }
  uVar4 = FUN_0031aab8(param_1);
  switch(uVar4) {
  case 1:
  case 3:
    uVar7 = *param_1;
    uVar9 = *param_2;
    break;
  case 2:
  case 4:
    return *(long *)param_1 == *(long *)param_2;
  case 5:
  case 6:
  case 8:
  case 10:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0xba);
                    /* try { // try from 00399bc8 to 00399bdb has its CatchHandler @ 00399d1c */
    uVar6 = FUN_0030f3ac(auStack_50,"Unsupported");
                    /* try { // try from 00399bdc to 00399be3 has its CatchHandler @ 00399d18 */
    FUN_0030f41c(auStack_18,uVar6);
    FUN_0030f658(auStack_50);
  default:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0xc9);
                    /* try { // try from 00399c04 to 00399c17 has its CatchHandler @ 00399d24 */
    uVar6 = FUN_0030f3ac(auStack_50,"Can\'t get here.");
                    /* try { // try from 00399c18 to 00399c1f has its CatchHandler @ 00399d20 */
    FUN_0030f41c(auStack_18,uVar6);
    FUN_0030f658(auStack_50);
    return false;
  case 7:
    uVar7 = (uint)(byte)*param_1;
    uVar9 = (uint)(byte)*param_2;
    break;
  case 9:
    bVar2 = (byte)*param_1;
    uVar8 = (ulong)(bVar2 >> 1);
    __n = uVar8;
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 2);
    }
    bVar3 = (byte)*param_2;
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 2);
    }
    if (__n != sVar1) {
      return false;
    }
    __s1 = *(byte **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      __s1 = (byte *)((long)param_1 + 1);
    }
    __s2 = *(byte **)(param_2 + 4);
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)((long)param_2 + 1);
    }
    if ((bVar2 & 1) != 0) {
      if (__n == 0) {
        return true;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      return iVar5 == 0;
    }
    if (__n == 0) {
      return true;
    }
    do {
      param_1 = (uint *)((long)param_1 + 1);
      if (*(byte *)param_1 != *__s2) {
        return false;
      }
      uVar8 = uVar8 - 1;
      __s2 = __s2 + 1;
    } while (uVar8 != 0);
    return true;
  }
  return uVar7 == uVar9;
}


