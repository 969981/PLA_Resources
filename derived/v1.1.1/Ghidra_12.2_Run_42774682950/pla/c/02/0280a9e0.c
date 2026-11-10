/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280a9e0; name: FUN_0280a9e0
 */


void FUN_0280a9e0(long param_1)

{
  if (*(int *)(param_1 + 0x510) < 1) {
    if (**(char **)(param_1 + 0x100) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0xf8,0)
      ;
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0xf8,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0xf8,*(undefined8 *)(param_1 + 0x470));
  }
  if (*(int *)(param_1 + 0x510) < 2) {
    if (**(char **)(param_1 + 0x140) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
                (*(long **)(param_1 + 0xe8),param_1 + 0x138,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x138,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0x138,*(undefined8 *)(param_1 + 0x478));
  }
  if (*(int *)(param_1 + 0x510) < 3) {
    if (**(char **)(param_1 + 0x180) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
                (*(long **)(param_1 + 0xe8),param_1 + 0x178,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x178,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0x178,*(undefined8 *)(param_1 + 0x480));
  }
  if (*(int *)(param_1 + 0x510) < 4) {
    if (**(char **)(param_1 + 0x1c0) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
                (*(long **)(param_1 + 0xe8),param_1 + 0x1b8,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x1b8,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0x1b8,*(undefined8 *)(param_1 + 0x488));
  }
  if (*(int *)(param_1 + 0x510) < 5) {
    if (**(char **)(param_1 + 0x200) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
                (*(long **)(param_1 + 0xe8),param_1 + 0x1f8,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x1f8,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x490));
  }
  if (*(int *)(param_1 + 0x510) < 6) {
    if (**(char **)(param_1 + 0x240) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
                (*(long **)(param_1 + 0xe8),param_1 + 0x238,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x238,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0x238,*(undefined8 *)(param_1 + 0x498));
  }
  if (*(int *)(param_1 + 0x510) < 7) {
    if (**(char **)(param_1 + 0x280) != '\0') {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
                (*(long **)(param_1 + 0xe8),param_1 + 0x278,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x278,1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
              (*(long **)(param_1 + 0xe8),param_1 + 0x278,*(undefined8 *)(param_1 + 0x4a0));
  }
                    /* WARNING: Could not recover jumptable at 0x0280ace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),param_1 + 0x338,0);
  return;
}


