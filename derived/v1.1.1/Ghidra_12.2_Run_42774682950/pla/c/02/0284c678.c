/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284c678; name: FUN_0284c678
 */


void FUN_0284c678(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_68;
  long *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  char *local_28;
  
  if (param_4 == 10) {
    if (((*PTR_DAT_0437b180 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
    lVar4 = *(long *)PTR_DAT_0437b188;
    *(long *)PTR_DAT_0437b190 = lVar4;
    cVar1 = *(char *)(lVar4 + 0x50);
    if (cVar1 != '\x01') {
      switch(cVar1) {
      case '\x03':
        break;
      case '\x04':
        goto switchD_0284c828_caseD_4;
      case '\x05':
        goto switchD_0284c828_caseD_5;
      default:
        goto switchD_0284c828_caseD_2;
      case '\a':
        goto switchD_0284c828_caseD_6;
      case '\b':
        goto switchD_0284c828_caseD_7;
      case '\t':
        goto switchD_0284c828_caseD_8;
      case '\n':
        goto switchD_0284c828_caseD_9;
      }
switchD_0284c828_caseD_3:
      local_28 = "bin/message/sort_string/French/";
      goto LAB_0284c708;
    }
  }
  else {
    switch(param_4) {
    case 2:
switchD_0284c828_caseD_2:
      local_28 = "bin/message/sort_string/English/";
      goto LAB_0284c708;
    case 3:
      goto switchD_0284c828_caseD_3;
    case 4:
switchD_0284c828_caseD_4:
      local_28 = "bin/message/sort_string/Italian/";
      goto LAB_0284c708;
    case 5:
switchD_0284c828_caseD_5:
      local_28 = "bin/message/sort_string/German/";
      goto LAB_0284c708;
    case 6:
switchD_0284c828_caseD_6:
      local_28 = "bin/message/sort_string/Spanish/";
      goto LAB_0284c708;
    case 7:
switchD_0284c828_caseD_7:
      local_28 = "bin/message/sort_string/Korean/";
      goto LAB_0284c708;
    case 8:
switchD_0284c828_caseD_8:
      local_28 = "bin/message/sort_string/Simp_Chinese/";
      goto LAB_0284c708;
    case 9:
switchD_0284c828_caseD_9:
      local_28 = "bin/message/sort_string/Trad_Chinese/";
      goto LAB_0284c708;
    }
  }
  local_28 = "bin/message/sort_string/jpn/";
LAB_0284c708:
  local_38 = 0;
  local_40 = (long *)0x0;
  local_48 = 0;
  local_50 = &DAT_03996322;
  puStack_58 = &DAT_cbf29ce484222645;
  local_60 = (long *)0x0;
  FUN_009f1b84(&local_90,&local_28);
  plVar2 = local_60;
  local_60 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_40;
  local_60 = local_90;
  local_90 = (long *)0x0;
  puStack_58 = (undefined1 *)uStack_88;
  local_50 = (undefined1 *)local_80;
  local_48 = uStack_78;
  local_40 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  local_40 = local_70;
  local_70 = (long *)0x0;
  local_38 = local_68;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  FUN_010c4f0c(param_1,&local_60,param_3,&DAT_03996322);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


