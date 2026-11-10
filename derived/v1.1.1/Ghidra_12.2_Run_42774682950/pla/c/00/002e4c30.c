/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4c30; name: FUN_002e4c30
 */


ulong FUN_002e4c30(int *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      uVar1 = param_1[4];
      uVar5 = param_2 >> 0x20;
      if ((int)uVar1 < (int)(param_2 >> 0x20)) {
        uVar4 = *(undefined8 *)(param_1 + 2);
        pcVar3 = "%s ignored: it must be >= %d";
        uVar2 = 0xff;
      }
      else {
        if ((int)uVar1 <= (int)param_3) {
          return (ulong)uVar1;
        }
        uVar4 = *(undefined8 *)(param_1 + 2);
        pcVar3 = "%s ignored: it must be <= %d";
        uVar2 = 0x104;
        uVar5 = (ulong)param_3;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",uVar2,2,
                   pcVar3,uVar4,uVar5);
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0xfb,2,
                   "%s ignored: it must be an integer",*(undefined8 *)(param_1 + 2));
    }
  }
  return param_2 & 0xffffffff;
}


