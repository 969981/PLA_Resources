/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a02b0; name: FUN_033a02b0
 */


void FUN_033a02b0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar2;
    lVar5 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TthkSerialize::Load::toVar";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
  }
  FUN_03306f24(*(undefined8 *)(param_2 + 0x18));
  lVar2 = FUN_0339e218(param_2,param_3,param_4,param_6);
  if (lVar2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    FUN_0339fc5c(param_1,param_2,lVar2,param_5);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
  }
  return;
}


