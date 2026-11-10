/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031c744; name: FUN_0031c744
 */


undefined1 FUN_0031c744(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  iVar2 = FUN_0031ccc4();
  if (iVar2 != 7) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x282);
                    /* try { // try from 0031c778 to 0031c7ef has its CatchHandler @ 0031c81c */
    uVar3 = FUN_0030f3ac(auStack_50,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_0030f3ac(uVar3,"MapValueRef::GetBoolValue");
    uVar3 = FUN_0030f3ac(uVar3," type does not match\n");
    uVar3 = FUN_0030f3ac(uVar3,"  Expected : ");
    puVar1 = PTR_PTR_04373ac8;
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(PTR_PTR_04373ac8 + 0x38));
    uVar3 = FUN_0030f3ac(uVar3,&DAT_0396725e);
    uVar3 = FUN_0030f3ac(uVar3,"  Actual   : ");
    uVar4 = FUN_0031ccc4(param_1);
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(puVar1 + (uVar4 & 0xffffffff) * 8));
                    /* try { // try from 0031c7f0 to 0031c7f7 has its CatchHandler @ 0031c818 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
  }
  return *(undefined1 *)*param_1;
}


