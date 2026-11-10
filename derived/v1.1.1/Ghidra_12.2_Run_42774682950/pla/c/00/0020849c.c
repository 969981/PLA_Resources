/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020849c; name: FUN_0020849c
 */


ulong FUN_0020849c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    pcVar6 = "RST_STREAM: stream_id == 0";
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if ((int)uVar1 <= iVar2) {
      lVar5 = FUN_00205cf4(param_1);
      if (lVar5 != 0) {
        FUN_00211820(lVar5,1);
      }
      if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar2 == 0)) {
        uVar3 = FUN_00206c04(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
        uVar1 = 0;
        if ((int)uVar3 < -900) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
      else {
        uVar4 = 0xfffffc7a;
      }
      return uVar4;
    }
    pcVar6 = "RST_STREAM: stream in idle";
  }
  uVar4 = FUN_00208428(param_1,param_2,0xfffffe07,pcVar6);
  return uVar4;
}


