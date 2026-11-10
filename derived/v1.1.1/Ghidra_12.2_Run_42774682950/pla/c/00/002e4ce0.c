/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4ce0; name: FUN_002e4ce0
 */


ulong FUN_002e4ce0(long *param_1,char *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((param_1 != (long *)0x0) && (lVar8 = *param_1, lVar8 != 0)) {
    puVar7 = (undefined8 *)(param_1[1] + 8);
    do {
      iVar2 = strcmp((char *)*puVar7,param_2);
      if (iVar2 == 0) {
        if (puVar7 != (undefined8 *)&DAT_00000008) {
          if (*(int *)(puVar7 + -1) == 1) {
            uVar1 = *(uint *)(puVar7 + 1);
            uVar6 = param_3 >> 0x20;
            if ((int)uVar1 < (int)(param_3 >> 0x20)) {
              uVar5 = *puVar7;
              pcVar4 = "%s ignored: it must be >= %d";
              uVar3 = 0xff;
            }
            else {
              if ((int)uVar1 <= (int)param_4) {
                return (ulong)uVar1;
              }
              uVar5 = *puVar7;
              pcVar4 = "%s ignored: it must be <= %d";
              uVar3 = 0x104;
              uVar6 = (ulong)param_4;
            }
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",uVar3,
                         2,pcVar4,uVar5,uVar6);
          }
          else {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0xfb,2
                         ,"%s ignored: it must be an integer",*puVar7);
          }
        }
        break;
      }
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return param_3 & 0xffffffff;
}


