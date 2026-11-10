/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00397104; name: FUN_00397104
 */


void FUN_00397104(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar2 = FUN_0031ccc4();
  if (iVar2 != 5) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x26d);
                    /* try { // try from 00397140 to 003971b7 has its CatchHandler @ 003971e8 */
    uVar3 = FUN_0030f3ac(auStack_60,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_0030f3ac(uVar3,"MapValueRef::SetDoubleValue");
    uVar3 = FUN_0030f3ac(uVar3," type does not match\n");
    uVar3 = FUN_0030f3ac(uVar3,"  Expected : ");
    puVar1 = PTR_PTR_04373ac8;
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(PTR_PTR_04373ac8 + 0x28));
    uVar3 = FUN_0030f3ac(uVar3,&DAT_0396725e);
    uVar3 = FUN_0030f3ac(uVar3,"  Actual   : ");
    uVar4 = FUN_0031ccc4(param_2);
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(puVar1 + (uVar4 & 0xffffffff) * 8));
                    /* try { // try from 003971b8 to 003971bf has its CatchHandler @ 003971e4 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
  }
  *(undefined8 *)*param_2 = param_1;
  return;
}


