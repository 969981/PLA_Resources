/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b06830; name: FUN_01b06830
 */


void FUN_01b06830(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  
  plVar3 = (long *)(param_1 + -0x48);
  uVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3);
    if ((*(long *)(param_1 + 0x5e0) == 0) || (*(int *)(*(long *)(param_1 + 0x5e0) + 0xc) == 0)) {
      lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      (**(code **)(*plVar3 + 0x278))((float)((double)*(long *)(lVar2 + 8) / 1000000000.0),plVar3);
    }
    if (*(char *)(*(long *)(param_1 + 0x578) + 0xa8) != '\0') {
      FUN_01a81438(plVar3);
    }
  }
  lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  fVar4 = *(float *)(*(long *)(param_1 + 0x578) + 0xd0);
  if (0.0 < fVar4) {
    *(float *)(*(long *)(param_1 + 0x578) + 0xd0) =
         fVar4 + (float)((double)*(long *)(lVar2 + 8) / -1000000000.0);
    if (*(float *)(*(long *)(param_1 + 0x578) + 0xd0) < 0.0) {
      *(undefined4 *)(*(long *)(param_1 + 0x578) + 0xd0) = 0;
    }
  }
  FUN_01b066a0(plVar3);
                    /* WARNING: Could not recover jumptable at 0x01b068c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xf0))(plVar3);
  return;
}


