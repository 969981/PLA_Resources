/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031c91c; name: FUN_0031c91c
 */


undefined1  [16] FUN_0031c91c(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  iVar2 = FUN_0031ccc4();
  if (iVar2 != 5) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x292);
                    /* try { // try from 0031c950 to 0031c9c7 has its CatchHandler @ 0031c9f4 */
    uVar3 = FUN_0030f3ac(auStack_50,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_0030f3ac(uVar3,"MapValueRef::GetDoubleValue");
    uVar3 = FUN_0030f3ac(uVar3," type does not match\n");
    uVar3 = FUN_0030f3ac(uVar3,"  Expected : ");
    puVar1 = PTR_PTR_04373ac8;
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(PTR_PTR_04373ac8 + 0x28));
    uVar3 = FUN_0030f3ac(uVar3,&DAT_0396725e);
    uVar3 = FUN_0030f3ac(uVar3,"  Actual   : ");
    uVar4 = FUN_0031ccc4(param_1);
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(puVar1 + (uVar4 & 0xffffffff) * 8));
                    /* try { // try from 0031c9c8 to 0031c9cf has its CatchHandler @ 0031c9f0 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
  }
  auVar5._0_8_ = *(ulong *)*param_1;
  auVar5._8_8_ = 0;
  return auVar5;
}


