/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003972f8; name: FUN_003972f8
 */


void FUN_003972f8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar3 = FUN_0031ccc4();
  if (iVar3 != 9) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x265);
                    /* try { // try from 00397334 to 003973ab has its CatchHandler @ 003973fc */
    uVar4 = FUN_0030f3ac(auStack_60,"Protocol Buffer map usage error:\n");
    uVar4 = FUN_0030f3ac(uVar4,"MapValueRef::SetStringValue");
    uVar4 = FUN_0030f3ac(uVar4," type does not match\n");
    uVar4 = FUN_0030f3ac(uVar4,"  Expected : ");
    puVar2 = PTR_PTR_04373ac8;
    uVar4 = FUN_0030f3ac(uVar4,*(undefined8 *)(PTR_PTR_04373ac8 + 0x48));
    uVar4 = FUN_0030f3ac(uVar4,&DAT_0396725e);
    uVar4 = FUN_0030f3ac(uVar4,"  Actual   : ");
    uVar5 = FUN_0031ccc4(param_1);
    uVar4 = FUN_0030f3ac(uVar4,*(undefined8 *)(puVar2 + (uVar5 & 0xffffffff) * 8));
                    /* try { // try from 003973ac to 003973b3 has its CatchHandler @ 003973f8 */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
  }
  if ((byte *)*param_1 != param_2) {
    uVar5 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar5 = (ulong)(*param_2 >> 1);
    }
    FUN_00291910((byte *)*param_1,pbVar1,uVar5);
  }
  return;
}


