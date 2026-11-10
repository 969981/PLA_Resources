/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b37660; name: FUN_02b37660
 */


void FUN_02b37660(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_68;
  
  puVar3 = PTR_DAT_04379c88;
  plVar1 = *(long **)(param_1 + 0x78);
  plVar2 = *(long **)(param_1 + 0x80);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar6 = *plVar1;
    if (**(char **)(lVar6 + 0xa0) == '\0') {
      lVar9 = *(long *)(lVar6 + 0x78);
      plVar4 = *(long **)(lVar6 + 0x90);
      if (plVar4 == (long *)0x0) goto LAB_02b3773c;
      pcVar7 = *(code **)(*plVar4 + 0x18);
      plVar5 = plVar4;
LAB_02b37720:
      (*pcVar7)(plVar4);
      lVar6 = *(long *)(param_3 + 8);
    }
    else {
      FUN_02b32f8c(&local_68,lVar6 + 0x98,&DAT_039b07fe,lVar6 + 0x78);
      plVar5 = local_68;
      plVar4 = (long *)puVar3;
      if (local_68 != (long *)0x0) {
        plVar4 = local_68 + 0xb;
      }
      lVar9 = *plVar4;
      plVar4 = plVar5;
      if ((local_68 != (long *)0x0) &&
         ((**(code **)(*local_68 + 0x18))(local_68), local_68 != (long *)0x0)) {
        pcVar7 = *(code **)(*local_68 + 0x20);
        plVar4 = local_68;
        goto LAB_02b37720;
      }
LAB_02b3773c:
      lVar6 = *(long *)(param_3 + 8);
      plVar5 = plVar4;
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (lVar9 == lVar6) {
      lVar6 = *plVar1;
      plVar4 = *(long **)(lVar6 + 0xb0);
      uVar8 = *(undefined8 *)PTR_PTR_04379d00;
      *(undefined1 **)(lVar6 + 0x98) = &DAT_cbf29ce484222645;
      *(undefined8 *)(lVar6 + 0xa0) = uVar8;
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      lVar6 = *plVar1;
      *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(param_4 + 0x18);
      plVar4 = *(long **)(param_4 + 0x20);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      plVar5 = *(long **)(lVar6 + 0x90);
      *(long **)(lVar6 + 0x90) = plVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      FUN_02b73040(*plVar1,param_2);
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


