/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e758; name: FUN_0031e758
 */


undefined8 FUN_0031e758(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *__dest;
  size_t __n;
  long local_a0;
  long local_98;
  long *plStack_90;
  undefined4 local_84;
  undefined8 local_80;
  long alStack_78 [5];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("len >= 0",
                  "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/stubs/stringpiece.h"
                  ,0xe6,"StringPiece");
  }
  __n = (size_t)param_3;
  (**(code **)(*param_1 + 0x28))();
  local_48 = *(undefined4 *)PTR_DAT_04373a40;
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  alStack_78[0] = 0;
  local_80 = 0;
  alStack_78[2] = 0;
  alStack_78[1] = 0;
  uStack_44 = 0x80000000;
  alStack_78[4] = 0;
  alStack_78[3] = 0;
  if (param_3 < 0x11) {
    __dest = alStack_78;
    memcpy(__dest,param_2,__n);
    local_98 = (long)__dest + __n;
    plStack_90 = (long *)0x0;
    local_84 = 0;
    if (alStack_78[4] == 1) {
      alStack_78[4] = (long)param_2 - (long)__dest;
    }
  }
  else {
    local_84 = 0x10;
    plStack_90 = alStack_78;
    local_98 = (long)param_2 + (__n - 0x10);
    __dest = param_2;
  }
  local_a0 = local_98;
  lVar1 = (**(code **)(*param_1 + 0x58))(param_1,__dest,&local_a0);
  uVar2 = 0;
  if ((lVar1 != 0) && ((int)local_50 == 0)) {
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_0031e2b4(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


