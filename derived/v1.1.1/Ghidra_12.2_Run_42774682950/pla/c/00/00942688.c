/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00942688; name: FUN_00942688
 */


void FUN_00942688(long param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*param_2 != 1) {
    if (*param_2 != 0) {
      return;
    }
    FUN_00942774(param_1);
    FUN_009429c4(param_1);
    FUN_00942b50(param_1);
    FUN_00942c08(param_1);
    *(undefined4 *)(param_1 + 100) = 0;
    *param_2 = *param_2 + 1;
  }
  uVar1 = FUN_02942fac(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98),param_1 + 100);
  if ((uVar1 & 1) != 0) {
    FUN_0092397c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
    FUN_00923c20(*(undefined8 *)(param_1 + 0x28));
    FUN_008c8224();
    FUN_00942c38(param_1);
    FUN_00945344(param_1);
    FUN_00945400(param_1);
    FUN_0094546c(param_1);
    FUN_009454d8(param_1);
    FUN_00945758(param_1);
    FUN_00945d28(param_1);
    FUN_00945db0(param_1);
    uVar2 = FUN_00923ca8(*(undefined8 *)(param_1 + 0x28));
    FUN_00928010(uVar2,0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


