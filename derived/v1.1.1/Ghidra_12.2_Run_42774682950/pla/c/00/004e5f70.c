/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e5f70; name: FUN_004e5f70
 */


ulong FUN_004e5f70(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = 0x11;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar3 = 0x21;
  }
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x270) == 0) {
    lVar4 = *(long *)(param_1 + 0x508);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == 0)) {
      FUN_004014b0(0x14,0x124,0x85,"external/openssl/ssl/s3_msg.c",0x18);
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x1f8) = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x238);
    uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x20))(param_1,uVar3);
  return (ulong)(iVar1 != 0);
}


