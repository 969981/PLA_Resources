/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e34cc; name: FUN_029e34cc
 */


void FUN_029e34cc(long param_1,undefined1 *param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char local_80 [8];
  undefined1 local_78;
  undefined1 local_77;
  short local_76;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  *param_2 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if ((ulong)*(byte *)((long)param_3 + 3) == 0x1f) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(byte *)((long)param_3 + 3) * 8 + 0x120);
  }
  pcVar5 = *(char **)(lVar4 + 0xa8);
  bVar1 = *(byte *)(param_3 + 1);
  if (((((*pcVar5 != '\0') && (pcVar5[2] == bVar1)) || ((pcVar5[3] != '\0' && (pcVar5[5] == bVar1)))
       ) || ((((pcVar5[6] != '\0' && (pcVar5[8] == bVar1)) ||
              ((pcVar5[9] != '\0' && (pcVar5[0xb] == bVar1)))) ||
             (((pcVar5[0xc] != '\0' && (pcVar5[0xe] == bVar1)) ||
              ((pcVar5[0xf] != '\0' && (pcVar5[0x11] == bVar1)))))))) &&
     (lVar4 = *(long *)(*(long *)(lVar4 + 8) + (ulong)bVar1 * 8 + 0x120),
     *(short *)(lVar4 + 0x74) != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x5c0);
    uVar2 = *(undefined1 *)(param_3 + 2);
    local_76 = FUN_02992f1c(*(undefined8 *)(lVar6 + 0x38),lVar4,uVar3,*param_3);
    if (local_76 != 0) {
      local_78 = 0x1f;
      local_74 = 0;
      local_70 = 1;
      local_6e = 0;
      local_48 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_77 = *(undefined1 *)(lVar4 + 0x7d);
      local_6f = 0;
      local_6d = 1;
      local_6c = uVar2;
      FUN_029ef37c(*(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x1620),local_80,&local_78);
      if (local_80[0] != '\0') {
        if ((*(byte *)(param_3 + 5) & 0x7f) != 0) {
          FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
        }
        *param_2 = 1;
      }
    }
  }
  return;
}


