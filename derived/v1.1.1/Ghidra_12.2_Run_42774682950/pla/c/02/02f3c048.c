/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c048; name: FUN_02f3c048
 */


void FUN_02f3c048(long *param_1,int *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((*(byte *)((long)param_1 + 0x5a) >> 4 & 1) == 0) {
    lVar3 = param_1[7];
    local_30 = *param_2;
    if (lVar3 == 0) {
      if (((*(byte *)((long)param_1 + 0x5a) & 3) != 0) && (0 < local_30)) {
        iStack_2c = param_2[1];
        local_24 = 0x100;
        local_48 = param_1 + 5;
        local_40 = 0x2000000;
        local_38 = 0x3f800000;
        local_28 = 0x17;
        local_22 = 0;
        lVar3 = FUN_02f0ed58(DAT_0440a150,&local_48,1,0);
        param_1[7] = lVar3;
        if (lVar3 == 0) {
          (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
        }
        return;
      }
    }
    else {
      if (local_30 != 0) {
        FUN_02f0f0a8(0,DAT_0440a150,lVar3,0x2000000,local_30,param_2[1],0);
        return;
      }
      puVar5 = *(undefined8 **)(lVar3 + 0x28);
      uVar4 = *(uint *)(lVar3 + 0x30);
      puVar2 = puVar5 + uVar4;
      if ((uVar4 != 0) && ((long *)*puVar5 != param_1 + 5)) {
        lVar7 = (ulong)uVar4 * 8;
        puVar6 = puVar5;
        do {
          lVar7 = lVar7 + -8;
          if (lVar7 == 0) goto LAB_02f3c164;
          puVar5 = puVar6 + 1;
          puVar1 = puVar6 + 1;
          puVar6 = puVar5;
        } while ((long *)*puVar1 != param_1 + 5);
      }
      if (puVar2 != puVar5) {
        if (1 < uVar4) {
          *puVar5 = puVar2[-1];
          uVar4 = *(uint *)(lVar3 + 0x30);
        }
        *(uint *)(lVar3 + 0x30) = uVar4 - 1;
        if (uVar4 - 1 == 0) {
          *(undefined4 *)(lVar3 + 0x3c) = 6;
        }
      }
LAB_02f3c164:
      param_1[7] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02f3c184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}


