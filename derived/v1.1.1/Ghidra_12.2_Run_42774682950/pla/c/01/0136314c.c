/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136314c; name: FUN_0136314c
 */


void FUN_0136314c(long param_1,undefined4 param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_58;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar5 = FUN_009cfbc8(*(long *)(param_1 + 0x90) + 0xf0,&local_50), lVar5 != 0)) {
    if ((param_3 & 1) != 0) {
      FUN_02a4754c(&local_50,PTR_DAT_0437a3d8);
      lVar7 = FUN_0289e9f4(lVar5,&local_50);
      if (lVar7 == 0) {
        local_58 = (long *)0x0;
      }
      else {
        FUN_009cda48(&local_58,lVar7,auStack_28);
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if ((local_58 != (long *)0x0) && ((**(code **)(*local_58 + 0x98))(), local_58 != (long *)0x0))
      {
        lVar7 = local_58[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
    FUN_02a4754c(&local_50,PTR_DAT_0437a3d8);
    puVar6 = (undefined8 *)FUN_0289f734(lVar5,&local_50);
    plVar11 = (long *)*puVar6;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (plVar11 != (long *)0x0) {
      local_50 = &DAT_cbf29ce484222645;
      pcStack_48 = "";
      local_40 = 0;
      puVar9 = (undefined1 *)0xe92d3c2df35e21af;
      pcVar8 = "one_attack_trigger";
      uVar10 = 0x12;
      switch(param_2) {
      case 3:
      case 5:
        puVar9 = (undefined1 *)0x28659ba5f229f146;
        uVar10 = 0x13;
        pcVar8 = "one_emotion_trigger";
      case 2:
      case 4:
        local_50 = puVar9;
        pcStack_48 = pcVar8;
        local_40 = uVar10;
      default:
        local_38 = (long *)0x0;
        if (*pcStack_48 != '\0') {
          local_58 = (long *)(**(code **)(*plVar11 + 200))(plVar11,&local_50);
          if (((ulong)local_58 & 0xff) != 0) {
            (**(code **)(*plVar11 + 0xd8))(plVar11,&local_58,1);
          }
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
        }
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
  return;
}


